#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)97;
signed char var_7 = (signed char)-115;
_Bool var_11 = (_Bool)1;
long long int var_12 = -1996681169273290044LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -6337824674824938054LL;
long long int var_15 = 2514126587333931166LL;
unsigned short var_16 = (unsigned short)39445;
_Bool var_17 = (_Bool)0;
signed char arr_0 [21] ;
long long int arr_1 [21] ;
short arr_3 [21] [21] ;
signed char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6791262309392234253LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-27768;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)77;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
