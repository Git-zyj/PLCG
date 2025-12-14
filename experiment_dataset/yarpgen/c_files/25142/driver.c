#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39397;
int var_1 = -250137805;
unsigned int var_2 = 3541837259U;
long long int var_3 = -2470919268900081806LL;
unsigned short var_4 = (unsigned short)63349;
signed char var_5 = (signed char)63;
unsigned long long int var_7 = 16730476073235184262ULL;
short var_9 = (short)27223;
int zero = 0;
unsigned int var_13 = 2336589045U;
_Bool var_14 = (_Bool)0;
int var_15 = -358895581;
signed char var_16 = (signed char)-93;
unsigned char var_17 = (unsigned char)165;
unsigned long long int var_18 = 11421456225283340669ULL;
unsigned char var_19 = (unsigned char)38;
signed char var_20 = (signed char)-44;
unsigned int var_21 = 2119558091U;
unsigned int arr_11 [18] [18] ;
signed char arr_12 [18] [18] [18] ;
_Bool arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = 3549213334U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
