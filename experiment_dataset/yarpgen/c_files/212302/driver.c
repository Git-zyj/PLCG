#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2625524620U;
int var_2 = -976065477;
unsigned char var_3 = (unsigned char)147;
unsigned char var_5 = (unsigned char)102;
signed char var_6 = (signed char)109;
unsigned char var_7 = (unsigned char)140;
unsigned char var_8 = (unsigned char)202;
int zero = 0;
unsigned long long int var_10 = 11882656809284205019ULL;
long long int var_11 = 5746120230456575817LL;
unsigned int var_12 = 2872807470U;
int var_13 = 202771008;
short var_14 = (short)5042;
unsigned char var_15 = (unsigned char)225;
unsigned char var_16 = (unsigned char)103;
unsigned short arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)44477;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
