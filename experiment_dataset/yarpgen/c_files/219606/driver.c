#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3325581035U;
short var_2 = (short)-21788;
long long int var_3 = 77787778695707335LL;
unsigned char var_8 = (unsigned char)122;
int var_9 = -175929696;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)20802;
unsigned int var_13 = 67791192U;
unsigned int var_14 = 3671136943U;
unsigned long long int var_15 = 12764668608569412048ULL;
unsigned long long int var_16 = 14530335807213565881ULL;
_Bool var_17 = (_Bool)1;
int arr_1 [22] [22] ;
long long int arr_3 [21] ;
_Bool arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 137938213;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -2762448962563398387LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
