#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 380538089U;
unsigned char var_8 = (unsigned char)143;
unsigned char var_17 = (unsigned char)43;
int zero = 0;
short var_20 = (short)-28099;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 7897903051060334293ULL;
short var_24 = (short)-1029;
unsigned int arr_2 [25] ;
unsigned char arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 595079675U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)28 : (unsigned char)101;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
