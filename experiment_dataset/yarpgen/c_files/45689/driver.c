#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1947869184;
unsigned short var_9 = (unsigned short)29228;
unsigned long long int var_12 = 12737173859504226811ULL;
int zero = 0;
unsigned int var_16 = 2394185406U;
int var_17 = 1038708788;
_Bool var_18 = (_Bool)0;
int var_19 = -2087890225;
unsigned char var_20 = (unsigned char)161;
short var_21 = (short)30544;
_Bool arr_0 [21] ;
signed char arr_1 [21] ;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1862720415;
}

void checksum() {
    hash(&seed, var_16);
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
