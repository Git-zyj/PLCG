#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 576387426611877838LL;
short var_7 = (short)-1722;
int var_18 = -605766025;
int zero = 0;
int var_20 = 946725238;
short var_21 = (short)24094;
unsigned long long int var_22 = 3413677583857690344ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
