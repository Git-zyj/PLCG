#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2547887273U;
unsigned short var_18 = (unsigned short)27262;
short var_19 = (short)15119;
int zero = 0;
long long int var_20 = 1782585354429729970LL;
unsigned short var_21 = (unsigned short)43427;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
