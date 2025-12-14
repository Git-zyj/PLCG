#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19946;
signed char var_2 = (signed char)-38;
signed char var_4 = (signed char)43;
signed char var_5 = (signed char)94;
signed char var_6 = (signed char)1;
signed char var_7 = (signed char)-77;
unsigned char var_8 = (unsigned char)190;
unsigned int var_13 = 2630121883U;
int zero = 0;
unsigned char var_17 = (unsigned char)184;
unsigned char var_18 = (unsigned char)101;
short var_19 = (short)-13303;
unsigned int var_20 = 3295267012U;
short var_21 = (short)-366;
unsigned int arr_0 [13] ;
int arr_1 [13] [13] ;
short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2969854867U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 420247326;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-11483;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
