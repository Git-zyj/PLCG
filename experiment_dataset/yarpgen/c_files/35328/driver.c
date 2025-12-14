#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 559978175U;
unsigned short var_1 = (unsigned short)65119;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)44325;
unsigned short var_7 = (unsigned short)4848;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 581250522U;
long long int var_10 = -6574095505022272388LL;
unsigned char var_11 = (unsigned char)196;
long long int var_16 = 1429001369093960878LL;
int zero = 0;
int var_20 = 1650653158;
signed char var_21 = (signed char)-11;
unsigned short var_22 = (unsigned short)6751;
signed char var_23 = (signed char)-42;
unsigned int var_24 = 1100959385U;
unsigned char var_25 = (unsigned char)221;
unsigned long long int var_26 = 3059490515734074491ULL;
unsigned long long int var_27 = 6203986329026183122ULL;
signed char var_28 = (signed char)-46;
int var_29 = -1287686903;
int var_30 = -348885249;
signed char var_31 = (signed char)42;
long long int var_32 = -3700990918074352743LL;
unsigned int var_33 = 235153133U;
unsigned char arr_3 [13] [13] [13] ;
unsigned short arr_6 [13] ;
long long int arr_10 [21] ;
signed char arr_11 [21] ;
unsigned long long int arr_13 [21] ;
_Bool arr_16 [21] [21] [21] [21] ;
unsigned int arr_17 [21] [21] [21] [21] ;
long long int arr_18 [21] ;
long long int arr_22 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)26072;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = -9195086577686046042LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 7858479993740784437ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 3562017461U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -6332114780305303519LL : 5602821975368940341LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 4394761805806451433LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
