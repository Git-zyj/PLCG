#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 10550708648540360704ULL;
short var_3 = (short)18649;
short var_4 = (short)3325;
unsigned long long int var_6 = 13329410679670282587ULL;
int var_7 = 36037557;
short var_8 = (short)-31948;
unsigned long long int var_10 = 13785757053733605302ULL;
short var_11 = (short)-11731;
short var_12 = (short)-26429;
signed char var_14 = (signed char)-65;
short var_15 = (short)-8321;
int var_17 = -970226257;
int zero = 0;
short var_18 = (short)-29312;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)57;
unsigned int var_21 = 4092754656U;
unsigned long long int var_22 = 15536921002255248934ULL;
short var_23 = (short)-1801;
short var_24 = (short)22047;
unsigned long long int var_25 = 6564253911170822786ULL;
unsigned char arr_0 [21] ;
_Bool arr_1 [21] [21] ;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1470223033;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
