#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
signed char var_2 = (signed char)-7;
short var_4 = (short)25906;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3411309999U;
signed char var_7 = (signed char)-101;
unsigned short var_9 = (unsigned short)46332;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
long long int var_12 = -3959664404261404767LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4003844142U;
unsigned short var_16 = (unsigned short)29565;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 198798724U;
short var_20 = (short)19401;
signed char var_21 = (signed char)-85;
unsigned short var_22 = (unsigned short)49042;
unsigned short var_23 = (unsigned short)58424;
signed char var_24 = (signed char)66;
unsigned char var_25 = (unsigned char)136;
signed char var_26 = (signed char)84;
unsigned long long int var_27 = 14129203563780288893ULL;
int var_28 = 1062612016;
short var_29 = (short)-8609;
signed char var_30 = (signed char)94;
long long int var_31 = -5793349098709578803LL;
int var_32 = -492658336;
int var_33 = 68163057;
long long int var_34 = -6049338165497017709LL;
unsigned short var_35 = (unsigned short)8753;
unsigned int var_36 = 1309666896U;
unsigned int arr_0 [22] ;
unsigned long long int arr_2 [22] ;
unsigned int arr_3 [22] ;
int arr_5 [22] [22] [22] ;
int arr_6 [22] ;
long long int arr_7 [22] [22] [22] [22] ;
long long int arr_8 [22] ;
unsigned char arr_9 [22] ;
unsigned char arr_10 [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_11 [22] ;
signed char arr_13 [22] [22] [22] [22] [22] [22] ;
short arr_18 [22] [22] [22] [22] [22] ;
long long int arr_21 [21] [21] ;
signed char arr_25 [21] [21] ;
unsigned short arr_14 [22] ;
unsigned long long int arr_23 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3467611650U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 14569050686017400944ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3973012582U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -869510590;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -1917296249;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 72296516409664988LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 7780786655145666613LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned char)45 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 16379760406531662621ULL : 15921867806302206223ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)30245;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? -5338418083807166657LL : -7213682343868391830LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36104 : (unsigned short)22271;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 16084642063242706296ULL : 461826557365948807ULL;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
