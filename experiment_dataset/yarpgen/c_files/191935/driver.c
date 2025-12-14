#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1833827744971536855LL;
short var_1 = (short)6102;
short var_2 = (short)1428;
short var_4 = (short)7757;
long long int var_7 = -7434029535803989433LL;
unsigned long long int var_9 = 9716250984589491435ULL;
unsigned long long int var_15 = 9136954760398080030ULL;
int zero = 0;
short var_18 = (short)-13996;
long long int var_19 = 1236593090664815796LL;
signed char var_20 = (signed char)62;
unsigned int var_21 = 3233802099U;
signed char var_22 = (signed char)68;
unsigned long long int var_23 = 15452175381332228026ULL;
_Bool arr_3 [13] [13] ;
unsigned char arr_4 [13] [13] [13] ;
int arr_17 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = -2104940131;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
