#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31060;
short var_3 = (short)-27053;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 5231362358909833775ULL;
short var_7 = (short)13617;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)36;
signed char var_15 = (signed char)124;
int zero = 0;
signed char var_19 = (signed char)104;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-31;
short var_22 = (short)772;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 7053289537567230597ULL;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-81;
unsigned long long int var_27 = 17317764431683943139ULL;
short var_28 = (short)5988;
unsigned long long int arr_4 [25] ;
_Bool arr_6 [25] [25] [25] ;
_Bool arr_7 [25] [25] ;
unsigned long long int arr_9 [25] [25] [25] [25] ;
_Bool arr_10 [25] [25] [25] [25] [25] [25] ;
_Bool arr_12 [11] ;
unsigned long long int arr_16 [11] ;
short arr_17 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 10628562873051830094ULL : 6214346542677444190ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 16526620686436437004ULL : 1043490026325590672ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 344967762188262000ULL : 13913276760327887668ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-32547 : (short)5895;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
