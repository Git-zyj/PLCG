#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1207610883018027146ULL;
unsigned int var_8 = 2475466974U;
unsigned char var_9 = (unsigned char)248;
unsigned char var_10 = (unsigned char)225;
unsigned char var_12 = (unsigned char)151;
int zero = 0;
unsigned char var_13 = (unsigned char)28;
signed char var_14 = (signed char)-29;
unsigned long long int var_15 = 12652495143031166861ULL;
unsigned long long int var_16 = 5249097526634085266ULL;
unsigned long long int arr_0 [24] [24] ;
unsigned short arr_1 [24] ;
int arr_2 [24] ;
unsigned char arr_3 [24] ;
unsigned short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 13880071037182889781ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49757 : (unsigned short)25796;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 66645569;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)89 : (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61394 : (unsigned short)19118;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
