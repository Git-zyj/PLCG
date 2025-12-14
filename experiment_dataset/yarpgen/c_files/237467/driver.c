#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned int var_1 = 2339282079U;
unsigned short var_2 = (unsigned short)9671;
signed char var_3 = (signed char)100;
short var_4 = (short)-4706;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)11658;
signed char var_7 = (signed char)-38;
unsigned short var_8 = (unsigned short)50246;
unsigned long long int var_9 = 16406848309647142702ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2927368398U;
unsigned int var_12 = 2071726714U;
unsigned short var_13 = (unsigned short)55118;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-36;
signed char var_16 = (signed char)-17;
unsigned char var_17 = (unsigned char)254;
unsigned int var_18 = 1134086635U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
