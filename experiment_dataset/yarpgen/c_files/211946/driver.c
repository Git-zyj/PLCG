#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
int var_3 = -777911832;
signed char var_4 = (signed char)72;
unsigned char var_5 = (unsigned char)154;
long long int var_7 = 3194092628061294368LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_12 = 5912805928428608519LL;
int zero = 0;
unsigned int var_13 = 4118115238U;
signed char var_14 = (signed char)-120;
_Bool var_15 = (_Bool)1;
int var_16 = 105738631;
signed char var_17 = (signed char)-33;
unsigned char arr_0 [22] ;
short arr_1 [22] ;
signed char arr_3 [22] [22] ;
unsigned long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-18875;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 14879570476822373616ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
