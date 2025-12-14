#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)147;
short var_2 = (short)-12809;
long long int var_3 = -314945952514081344LL;
unsigned char var_4 = (unsigned char)210;
_Bool var_5 = (_Bool)0;
short var_6 = (short)21073;
unsigned short var_7 = (unsigned short)34130;
unsigned char var_9 = (unsigned char)5;
short var_10 = (short)28476;
unsigned short var_11 = (unsigned short)11891;
unsigned long long int var_12 = 3861399664678707161ULL;
int var_13 = -1800579746;
short var_14 = (short)27820;
long long int var_15 = 4411368614534080006LL;
unsigned int var_16 = 1094139935U;
int zero = 0;
unsigned long long int var_17 = 8416610407535219670ULL;
short var_18 = (short)2781;
unsigned short var_19 = (unsigned short)48245;
unsigned char var_20 = (unsigned char)63;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)15694;
short var_24 = (short)19530;
unsigned long long int var_25 = 16739656782370915527ULL;
long long int arr_2 [20] ;
short arr_3 [20] [20] [20] ;
unsigned char arr_4 [20] [20] ;
unsigned short arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 5989885328823093811LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)3777 : (short)10420;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)30418;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
