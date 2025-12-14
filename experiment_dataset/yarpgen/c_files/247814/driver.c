#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14939630214546799922ULL;
int var_1 = -2052695434;
unsigned char var_2 = (unsigned char)130;
signed char var_4 = (signed char)66;
unsigned char var_14 = (unsigned char)101;
unsigned short var_16 = (unsigned short)52964;
int zero = 0;
int var_17 = -1923011574;
unsigned short var_18 = (unsigned short)57352;
short var_19 = (short)-19820;
unsigned int var_20 = 2105609174U;
unsigned long long int var_21 = 14863957748461002805ULL;
unsigned long long int var_22 = 8466270252724587785ULL;
int arr_4 [13] ;
unsigned short arr_6 [13] [13] [13] ;
unsigned long long int arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 390943458;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)6840;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 18162335623213908002ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
