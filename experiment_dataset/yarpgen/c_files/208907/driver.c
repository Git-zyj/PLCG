#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
short var_2 = (short)19684;
int var_4 = -1787271671;
unsigned int var_5 = 3283726511U;
unsigned long long int var_6 = 8624934300197713337ULL;
signed char var_8 = (signed char)-100;
unsigned long long int var_9 = 12791017993782781800ULL;
unsigned short var_10 = (unsigned short)53157;
unsigned long long int var_12 = 3027652543070643959ULL;
signed char var_13 = (signed char)48;
unsigned char var_16 = (unsigned char)117;
int zero = 0;
unsigned long long int var_20 = 14628493130575014917ULL;
int var_21 = -2087565319;
unsigned char var_22 = (unsigned char)243;
short var_23 = (short)-6965;
unsigned long long int arr_0 [21] ;
short arr_4 [21] [21] ;
unsigned int arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2302644308039975396ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-3230;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 964581081U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
