#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
unsigned char var_2 = (unsigned char)13;
signed char var_4 = (signed char)-53;
long long int var_5 = -4094350439982938648LL;
long long int var_6 = -2968065932568299459LL;
signed char var_8 = (signed char)92;
unsigned long long int var_9 = 15351976151261374778ULL;
short var_10 = (short)-19899;
int zero = 0;
unsigned long long int var_11 = 12480949238927011727ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5184326447601531397LL;
unsigned char var_14 = (unsigned char)202;
unsigned char var_15 = (unsigned char)115;
int var_16 = -452572966;
unsigned int var_17 = 3932307303U;
unsigned short var_18 = (unsigned short)37691;
unsigned char var_19 = (unsigned char)153;
long long int var_20 = -7790047644142065217LL;
unsigned long long int var_21 = 12847374618281421915ULL;
unsigned long long int var_22 = 6273245602056299061ULL;
short var_23 = (short)1316;
unsigned int var_24 = 260634495U;
_Bool arr_0 [20] ;
long long int arr_2 [20] ;
unsigned int arr_3 [20] [20] [20] ;
long long int arr_4 [20] ;
unsigned int arr_9 [20] [20] [20] [20] ;
long long int arr_11 [20] [20] [20] [20] [20] [20] ;
unsigned short arr_15 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -9164850953510010246LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1382541001U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -551381499557541988LL : 906703224664981800LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 513950883U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 4677965025080595321LL : -5221278092188749009LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)51936;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
