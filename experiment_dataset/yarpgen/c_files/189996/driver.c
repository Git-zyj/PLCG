#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1779828009591655740ULL;
unsigned char var_2 = (unsigned char)31;
unsigned char var_4 = (unsigned char)194;
unsigned long long int var_9 = 8953513405967950628ULL;
unsigned int var_10 = 3090692077U;
signed char var_13 = (signed char)127;
unsigned long long int var_14 = 8945442871741748551ULL;
signed char var_15 = (signed char)-124;
signed char var_16 = (signed char)101;
int zero = 0;
unsigned int var_17 = 2454441365U;
short var_18 = (short)31742;
unsigned long long int var_19 = 13695303524753083642ULL;
unsigned long long int var_20 = 5275310944108516768ULL;
unsigned char var_21 = (unsigned char)26;
_Bool arr_0 [10] [10] ;
unsigned char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)195;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
