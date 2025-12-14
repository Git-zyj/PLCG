#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3152511899U;
long long int var_2 = -6410712915046049045LL;
unsigned long long int var_4 = 8699063956058954919ULL;
unsigned long long int var_5 = 15069700933966594241ULL;
unsigned short var_7 = (unsigned short)55949;
int var_8 = 435229973;
long long int var_11 = 5361728498123484043LL;
int zero = 0;
unsigned long long int var_12 = 16552560766056650277ULL;
short var_13 = (short)20632;
_Bool var_14 = (_Bool)0;
int var_15 = -1928638753;
long long int var_16 = -990492158150332051LL;
unsigned long long int var_17 = 43660353869362629ULL;
unsigned short var_18 = (unsigned short)19370;
signed char var_19 = (signed char)13;
unsigned short var_20 = (unsigned short)27190;
short var_21 = (short)32678;
int var_22 = -1306542697;
int var_23 = -954004480;
unsigned char var_24 = (unsigned char)32;
unsigned short arr_0 [14] [14] ;
unsigned short arr_2 [14] [14] ;
short arr_4 [14] [14] ;
long long int arr_6 [14] ;
unsigned long long int arr_8 [14] [14] ;
unsigned long long int arr_13 [14] ;
int arr_16 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)12903;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)18556;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)24807;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 9147741000474049756LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 11773801437141947127ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 6425796413388244346ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 833187692;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
