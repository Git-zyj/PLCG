#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21647;
unsigned int var_3 = 2856872974U;
int zero = 0;
unsigned long long int var_16 = 10251866888592271058ULL;
int var_17 = 2016328929;
unsigned long long int var_18 = 1633270110466641072ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
