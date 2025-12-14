#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13601;
unsigned short var_2 = (unsigned short)47416;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)44889;
int var_8 = -1344690018;
unsigned int var_9 = 1826698159U;
unsigned long long int var_10 = 8296753090470851033ULL;
int var_11 = -889266737;
unsigned char var_13 = (unsigned char)51;
short var_14 = (short)30549;
int zero = 0;
unsigned long long int var_16 = 4910175515372279147ULL;
unsigned short var_17 = (unsigned short)31619;
unsigned long long int var_18 = 12734029013558389381ULL;
unsigned long long int var_19 = 2035182486893441260ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)250;
unsigned char var_22 = (unsigned char)17;
unsigned int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 862106664U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
