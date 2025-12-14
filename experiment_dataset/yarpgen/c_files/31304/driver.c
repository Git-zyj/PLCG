#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1229858752605489911ULL;
int var_1 = 558322881;
int var_2 = 1286252596;
int var_3 = 383553299;
long long int var_6 = 3798114903523654585LL;
unsigned int var_7 = 2106831695U;
signed char var_8 = (signed char)(-127 - 1);
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)52;
short var_11 = (short)21491;
int var_12 = 1341120826;
unsigned char var_13 = (unsigned char)26;
unsigned short var_14 = (unsigned short)6181;
unsigned long long int arr_1 [23] ;
unsigned char arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 16620650793523501634ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)185;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
