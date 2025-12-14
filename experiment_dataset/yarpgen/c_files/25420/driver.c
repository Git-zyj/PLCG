#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8542740420301835662LL;
unsigned char var_1 = (unsigned char)94;
signed char var_2 = (signed char)54;
int var_3 = -1039017650;
signed char var_4 = (signed char)116;
short var_5 = (short)-2247;
unsigned long long int var_8 = 3714031776316811831ULL;
signed char var_12 = (signed char)84;
unsigned long long int var_13 = 6399000540545287647ULL;
short var_14 = (short)10883;
int var_15 = 1219739195;
short var_16 = (short)15272;
long long int var_17 = -3368628305042397149LL;
int zero = 0;
signed char var_19 = (signed char)-111;
signed char var_20 = (signed char)-8;
int var_21 = 1448825768;
unsigned long long int var_22 = 8742772331047015949ULL;
unsigned int var_23 = 1237444956U;
unsigned long long int arr_2 [10] ;
short arr_6 [10] ;
int arr_7 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4731176185551062188ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)-1700;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1069795399;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
