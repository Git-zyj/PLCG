#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-37;
unsigned char var_3 = (unsigned char)58;
unsigned int var_6 = 73626794U;
unsigned int var_9 = 2328255910U;
signed char var_11 = (signed char)-27;
int var_14 = 1760874962;
unsigned short var_15 = (unsigned short)48031;
int var_16 = -970019136;
unsigned char var_17 = (unsigned char)220;
unsigned int var_19 = 2818155424U;
int zero = 0;
unsigned char var_20 = (unsigned char)192;
unsigned int var_21 = 2844475545U;
unsigned short var_22 = (unsigned short)58328;
_Bool var_23 = (_Bool)0;
int var_24 = 2077378702;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)62;
unsigned char arr_0 [21] [21] ;
unsigned char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)199;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
