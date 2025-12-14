#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13996466758357402123ULL;
long long int var_4 = -5025216264136080418LL;
unsigned short var_5 = (unsigned short)58940;
short var_6 = (short)-2850;
long long int var_7 = 7921873048069044865LL;
unsigned long long int var_8 = 15481644104578019750ULL;
short var_10 = (short)29663;
int zero = 0;
short var_11 = (short)10795;
unsigned long long int var_12 = 8220468656273693529ULL;
unsigned long long int var_13 = 13476308940681255228ULL;
short var_14 = (short)-20336;
short var_15 = (short)11669;
signed char var_16 = (signed char)-123;
short var_17 = (short)-29776;
unsigned long long int arr_0 [24] [24] ;
signed char arr_1 [24] ;
short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 3557291773859017039ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-18316 : (short)-10742;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
