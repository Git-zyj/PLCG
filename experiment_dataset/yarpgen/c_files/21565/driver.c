#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1536876048;
unsigned long long int var_1 = 17821111207226155485ULL;
int var_2 = -1108968999;
unsigned short var_3 = (unsigned short)26328;
long long int var_6 = 4847928571524683742LL;
int var_7 = -927427834;
unsigned char var_9 = (unsigned char)232;
int var_10 = -330315777;
unsigned short var_11 = (unsigned short)18270;
unsigned char var_14 = (unsigned char)237;
unsigned short var_15 = (unsigned short)403;
int var_16 = -218934593;
unsigned short var_17 = (unsigned short)18896;
unsigned short var_18 = (unsigned short)17122;
int zero = 0;
long long int var_19 = -3471373968375015752LL;
int var_20 = 365262338;
signed char var_21 = (signed char)111;
int var_22 = 1995629148;
unsigned int arr_0 [12] [12] ;
signed char arr_1 [12] [12] ;
signed char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 847009925U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)28;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
