#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3130414860409516109LL;
unsigned short var_1 = (unsigned short)57351;
unsigned long long int var_2 = 14394506311902142049ULL;
unsigned int var_3 = 2284942754U;
long long int var_4 = -6082527150449729997LL;
signed char var_5 = (signed char)94;
unsigned long long int var_6 = 6848014630689755231ULL;
unsigned int var_7 = 1392159305U;
long long int var_8 = -6522969748090712576LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)783;
signed char var_11 = (signed char)100;
int zero = 0;
unsigned char var_12 = (unsigned char)20;
signed char var_13 = (signed char)101;
unsigned int var_14 = 3747406562U;
unsigned short var_15 = (unsigned short)18613;
unsigned char var_16 = (unsigned char)250;
short var_17 = (short)2007;
unsigned int var_18 = 331968718U;
signed char var_19 = (signed char)86;
unsigned int var_20 = 3603543048U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
long long int var_23 = 9149310523865063005LL;
unsigned int var_24 = 1346601503U;
unsigned int var_25 = 3036590396U;
long long int var_26 = -4966571701484828624LL;
unsigned char var_27 = (unsigned char)38;
unsigned short var_28 = (unsigned short)11677;
unsigned long long int var_29 = 16898247930443100377ULL;
int var_30 = -1450058360;
_Bool var_31 = (_Bool)1;
signed char var_32 = (signed char)92;
int var_33 = 1467601885;
unsigned long long int var_34 = 17102065575480361477ULL;
signed char var_35 = (signed char)15;
unsigned int var_36 = 1589960717U;
unsigned short arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] [20] [20] ;
unsigned char arr_3 [20] [20] [20] ;
unsigned int arr_7 [20] [20] [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] [20] [20] [20] [20] ;
unsigned short arr_9 [20] [20] [20] [20] [20] [20] [20] ;
unsigned int arr_11 [20] [20] ;
unsigned long long int arr_12 [20] ;
short arr_30 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_31 [20] ;
long long int arr_32 [20] ;
long long int arr_33 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)4215;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 7742454826587035125ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 5693200608278701513ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 1531774279U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 17554558760949727380ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)18954;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 119595443U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 5954451463176087725ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-1548;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = 17757611048943661375ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = -6949209919115480050LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_33 [i_0] [i_1] = 9039411594778673028LL;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
