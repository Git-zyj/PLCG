#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2459374144936735302ULL;
unsigned int var_3 = 2463885808U;
signed char var_5 = (signed char)75;
int zero = 0;
unsigned int var_11 = 1693046111U;
signed char var_12 = (signed char)105;
unsigned int var_13 = 2755901249U;
unsigned short var_14 = (unsigned short)10191;
int var_15 = -879799001;
unsigned long long int arr_1 [18] ;
unsigned short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 5317876031292093248ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33044 : (unsigned short)49913;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
