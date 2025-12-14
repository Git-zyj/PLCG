#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)6377;
unsigned int var_7 = 168840139U;
unsigned char var_9 = (unsigned char)178;
int zero = 0;
int var_10 = 397534427;
unsigned long long int var_11 = 17300411056524235824ULL;
unsigned char var_12 = (unsigned char)78;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)15125;
_Bool var_15 = (_Bool)1;
unsigned int arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
unsigned char arr_3 [13] [13] [13] ;
unsigned char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3857739559U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)4072;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)28;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
