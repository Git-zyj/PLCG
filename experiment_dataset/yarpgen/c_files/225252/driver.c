#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)46;
unsigned long long int var_7 = 14361984537091363886ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 2122899762U;
signed char var_11 = (signed char)94;
signed char var_14 = (signed char)109;
signed char var_16 = (signed char)-94;
signed char var_17 = (signed char)66;
unsigned long long int var_18 = 15871851690359591039ULL;
int zero = 0;
long long int var_20 = 1726517642158625415LL;
signed char var_21 = (signed char)55;
unsigned int var_22 = 1630891972U;
signed char var_23 = (signed char)22;
unsigned int var_24 = 482369885U;
signed char arr_0 [11] [11] ;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 630909777U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
