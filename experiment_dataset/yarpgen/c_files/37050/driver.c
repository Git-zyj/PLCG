#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 734650943;
int var_3 = 1881391392;
unsigned int var_4 = 2883364386U;
unsigned char var_5 = (unsigned char)152;
int var_6 = 1173163863;
unsigned char var_7 = (unsigned char)87;
unsigned char var_8 = (unsigned char)196;
unsigned int var_9 = 1048892318U;
unsigned char var_10 = (unsigned char)110;
unsigned char var_11 = (unsigned char)188;
unsigned int var_12 = 1059430579U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4160319217U;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)162;
unsigned int var_20 = 802486042U;
unsigned int var_21 = 2386699455U;
unsigned int var_22 = 916469531U;
unsigned char arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)76 : (unsigned char)135;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
