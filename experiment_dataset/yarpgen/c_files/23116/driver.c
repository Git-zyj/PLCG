#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4230175879U;
short var_9 = (short)-2689;
unsigned short var_10 = (unsigned short)62295;
int zero = 0;
int var_12 = -1734335728;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 4613187501356767769ULL;
long long int var_15 = -2036336725147634810LL;
unsigned short arr_0 [22] ;
long long int arr_1 [22] ;
int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)5709;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -8819735643316042861LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1248190086;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
