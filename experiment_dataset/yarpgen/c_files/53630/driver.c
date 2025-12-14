#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6807594593925623398LL;
short var_2 = (short)-10995;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 12884205696329706745ULL;
short var_8 = (short)6549;
unsigned char var_9 = (unsigned char)36;
unsigned long long int var_10 = 10127171186975238901ULL;
unsigned long long int var_11 = 14514767622696145581ULL;
int zero = 0;
long long int var_13 = 4286367868556798604LL;
unsigned short var_14 = (unsigned short)3960;
long long int var_15 = -6216682724878779822LL;
unsigned int arr_0 [24] ;
unsigned short arr_4 [24] [24] ;
long long int arr_9 [24] ;
_Bool arr_10 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3916932339U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)24312;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -6171700796270908869LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
