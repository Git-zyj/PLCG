#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1926005549;
unsigned long long int var_6 = 8087092253113514468ULL;
signed char var_14 = (signed char)75;
int zero = 0;
long long int var_17 = -1233673464115519434LL;
short var_18 = (short)-26074;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
