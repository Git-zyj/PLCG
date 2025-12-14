#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3574741743881130681LL;
unsigned char var_1 = (unsigned char)100;
unsigned long long int var_4 = 267376803269300391ULL;
int var_5 = -588317215;
unsigned int var_6 = 1668556288U;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-6424;
short var_9 = (short)28943;
long long int var_10 = -2386879754307098745LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 15551695580190958977ULL;
unsigned char var_14 = (unsigned char)50;
long long int var_15 = 6655484022636478630LL;
long long int var_16 = 5087498708159729934LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)39642;
signed char var_19 = (signed char)5;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)28306;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)125;
_Bool var_24 = (_Bool)1;
int var_25 = -941646625;
unsigned int var_26 = 585752475U;
unsigned int var_27 = 324316591U;
signed char arr_7 [12] [12] [12] ;
signed char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-88 : (signed char)-84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)83;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
