#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13643;
short var_3 = (short)23032;
int var_6 = -108966775;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 1311923586623607859ULL;
short var_11 = (short)-18810;
unsigned int var_13 = 3180803931U;
int zero = 0;
signed char var_14 = (signed char)-41;
signed char var_15 = (signed char)89;
unsigned char var_16 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
