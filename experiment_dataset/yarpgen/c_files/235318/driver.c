#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2920533767U;
unsigned short var_5 = (unsigned short)50175;
unsigned long long int var_7 = 8895600504197835247ULL;
unsigned short var_8 = (unsigned short)48056;
int var_9 = -1834703;
long long int var_11 = 5085411493885403966LL;
int zero = 0;
unsigned long long int var_16 = 6198554336499630503ULL;
short var_17 = (short)31341;
unsigned char var_18 = (unsigned char)8;
signed char var_19 = (signed char)-86;
unsigned short var_20 = (unsigned short)49322;
unsigned char arr_2 [23] [23] ;
int arr_7 [23] [23] ;
int arr_8 [23] [23] [23] [23] ;
long long int arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -1044016784;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 697232051;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -5339531497132377754LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
