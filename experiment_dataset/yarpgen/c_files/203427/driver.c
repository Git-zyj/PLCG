#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4019709936420746563ULL;
unsigned char var_1 = (unsigned char)174;
long long int var_2 = -6201226171389186180LL;
long long int var_3 = 8155799330105514620LL;
long long int var_5 = 8256595879901216816LL;
unsigned long long int var_6 = 1217852437601628921ULL;
unsigned long long int var_9 = 12898091486877627205ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)27417;
short var_11 = (short)-9433;
short var_12 = (short)-12236;
short var_13 = (short)-6828;
int var_14 = 1139400795;
signed char var_15 = (signed char)114;
long long int arr_1 [21] ;
signed char arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6273899881789953552LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-46;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
