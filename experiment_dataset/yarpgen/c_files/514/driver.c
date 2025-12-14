#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1916563904U;
int var_3 = -1109201957;
unsigned char var_4 = (unsigned char)199;
unsigned char var_5 = (unsigned char)75;
int var_7 = 519715883;
long long int var_9 = 6662180668270725436LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3081915351845620045ULL;
unsigned long long int var_13 = 14198926826785191188ULL;
int var_14 = -1905399427;
_Bool arr_0 [10] ;
short arr_1 [10] ;
_Bool arr_2 [10] [10] [10] ;
signed char arr_3 [10] [10] [10] ;
signed char arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)20327;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)118;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
