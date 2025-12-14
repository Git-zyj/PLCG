#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
unsigned long long int var_2 = 10917298044149110847ULL;
short var_5 = (short)-17838;
short var_7 = (short)-19389;
unsigned long long int var_9 = 10109320762141951828ULL;
int zero = 0;
unsigned long long int var_11 = 10013360305810948746ULL;
signed char var_12 = (signed char)-101;
unsigned char var_13 = (unsigned char)73;
short var_14 = (short)8784;
unsigned char var_15 = (unsigned char)246;
unsigned char var_16 = (unsigned char)64;
unsigned long long int arr_0 [15] ;
unsigned short arr_1 [15] ;
signed char arr_2 [15] [15] ;
unsigned short arr_5 [10] ;
unsigned int arr_6 [10] [10] ;
unsigned long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2761682806150067219ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)61565;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)18437;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 3574687409U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 4714637500271758791ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
