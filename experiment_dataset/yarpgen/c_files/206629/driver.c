#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
int var_2 = -1644959996;
signed char var_3 = (signed char)-70;
int var_4 = 881912653;
signed char var_5 = (signed char)-101;
signed char var_8 = (signed char)-40;
unsigned char var_11 = (unsigned char)220;
int zero = 0;
signed char var_17 = (signed char)-81;
int var_18 = 908383867;
signed char var_19 = (signed char)1;
signed char var_20 = (signed char)-83;
unsigned char var_21 = (unsigned char)17;
unsigned char var_22 = (unsigned char)107;
int arr_0 [16] ;
signed char arr_2 [16] ;
signed char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1218811815;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)69 : (signed char)-35;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
