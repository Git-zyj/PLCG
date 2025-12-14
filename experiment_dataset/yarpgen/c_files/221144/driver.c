#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17885317263207119061ULL;
unsigned int var_11 = 3795304731U;
long long int var_15 = -7319926026011196301LL;
int zero = 0;
short var_19 = (short)-17972;
unsigned short var_20 = (unsigned short)63213;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
