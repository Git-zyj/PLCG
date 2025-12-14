#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
unsigned int var_1 = 669360400U;
signed char var_2 = (signed char)55;
unsigned char var_3 = (unsigned char)173;
unsigned long long int var_4 = 10381695570168511987ULL;
unsigned char var_5 = (unsigned char)119;
signed char var_6 = (signed char)-4;
unsigned int var_7 = 1745561206U;
unsigned char var_8 = (unsigned char)213;
long long int var_9 = 9099631204447609447LL;
int zero = 0;
unsigned char var_10 = (unsigned char)84;
long long int var_11 = -7487718817218162715LL;
unsigned char var_12 = (unsigned char)213;
signed char var_13 = (signed char)-17;
unsigned char var_14 = (unsigned char)109;
unsigned long long int var_15 = 13640972696511351787ULL;
unsigned char var_16 = (unsigned char)77;
signed char var_17 = (signed char)-74;
signed char var_18 = (signed char)-2;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1911775324U;
unsigned short var_21 = (unsigned short)19166;
short var_22 = (short)-20704;
unsigned char var_23 = (unsigned char)239;
int var_24 = 322452117;
int var_25 = -1710166236;
unsigned int var_26 = 4164435110U;
short var_27 = (short)-31649;
unsigned char var_28 = (unsigned char)16;
unsigned int var_29 = 2735392775U;
long long int var_30 = 3118850273987465021LL;
long long int var_31 = 1602252066433537089LL;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)134;
signed char arr_25 [13] [13] [13] [13] [13] ;
unsigned int arr_29 [13] [13] [13] [13] ;
unsigned char arr_38 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)57 : (signed char)28;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1427209172U : 3796423621U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = (unsigned char)35;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
