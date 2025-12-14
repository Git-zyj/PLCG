#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1849276030U;
int var_4 = 1182020138;
unsigned int var_5 = 2929369640U;
signed char var_6 = (signed char)116;
int var_7 = 1348363959;
unsigned long long int var_8 = 2837322308887361865ULL;
unsigned int var_11 = 3902903910U;
unsigned int var_12 = 1493162101U;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 1963809162730739783LL;
int var_16 = 1220113552;
unsigned int var_17 = 2783246937U;
short var_18 = (short)27284;
int arr_1 [17] ;
short arr_3 [17] ;
signed char arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 576348278;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)17206;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-11;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
