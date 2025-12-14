#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1277883069;
long long int var_3 = -4076060795003962177LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)8;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2382934158U;
int zero = 0;
signed char var_14 = (signed char)66;
unsigned long long int var_15 = 14330267229027773982ULL;
unsigned long long int var_16 = 14824754473104464583ULL;
unsigned long long int var_17 = 16026597259026460476ULL;
unsigned long long int var_18 = 10584357408049413204ULL;
unsigned long long int var_19 = 1587164619150759662ULL;
unsigned short var_20 = (unsigned short)33550;
_Bool arr_12 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
