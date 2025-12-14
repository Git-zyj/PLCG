#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3089;
signed char var_2 = (signed char)-9;
unsigned char var_3 = (unsigned char)19;
unsigned char var_6 = (unsigned char)43;
short var_8 = (short)-2988;
long long int var_9 = -1218647937109570716LL;
int zero = 0;
unsigned int var_10 = 401109699U;
long long int var_11 = 6922449269283527135LL;
unsigned char var_12 = (unsigned char)115;
long long int var_13 = 8684761217979806064LL;
signed char var_14 = (signed char)52;
short var_15 = (short)14452;
unsigned long long int arr_0 [13] [13] ;
short arr_1 [13] ;
unsigned long long int arr_2 [24] [24] ;
unsigned char arr_3 [24] [24] ;
short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 15100557276357827618ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)14044;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2822975437415313567ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-31839;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
