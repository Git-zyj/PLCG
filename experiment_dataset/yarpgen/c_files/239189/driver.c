#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48455;
unsigned short var_2 = (unsigned short)14377;
unsigned char var_3 = (unsigned char)2;
unsigned long long int var_4 = 10072519011616400648ULL;
short var_6 = (short)-15279;
int var_7 = -336702478;
unsigned char var_8 = (unsigned char)195;
_Bool var_10 = (_Bool)0;
short var_11 = (short)14146;
int zero = 0;
unsigned int var_12 = 11370305U;
signed char var_13 = (signed char)123;
short var_14 = (short)-12552;
unsigned long long int var_15 = 1436621474172947340ULL;
unsigned char var_16 = (unsigned char)171;
unsigned char var_17 = (unsigned char)162;
unsigned long long int var_18 = 11786992068702554308ULL;
unsigned long long int arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8362150789242138948ULL : 7564157459135126697ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)40;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
