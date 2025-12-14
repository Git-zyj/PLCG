#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
unsigned long long int var_3 = 10685016330616786291ULL;
signed char var_4 = (signed char)14;
signed char var_7 = (signed char)7;
unsigned short var_12 = (unsigned short)25999;
unsigned short var_13 = (unsigned short)8989;
int zero = 0;
unsigned short var_14 = (unsigned short)60918;
short var_15 = (short)-19123;
unsigned long long int var_16 = 248175492300064024ULL;
int var_17 = 220116438;
unsigned short var_18 = (unsigned short)13044;
unsigned int var_19 = 1011814607U;
unsigned char var_20 = (unsigned char)71;
unsigned long long int arr_0 [21] ;
long long int arr_1 [21] ;
signed char arr_4 [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
signed char arr_12 [24] ;
unsigned short arr_13 [24] ;
signed char arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 5216754358077476630ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3503174670057804613LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 16366812086664974019ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned short)3624;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)37;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
