#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5884564622520567329LL;
unsigned long long int var_2 = 4003706656430039719ULL;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_8 = -5687881643880032441LL;
signed char var_11 = (signed char)119;
int zero = 0;
unsigned long long int var_12 = 15399093463539044035ULL;
short var_13 = (short)-8780;
unsigned long long int var_14 = 6316569953222184942ULL;
long long int var_15 = 3301545302839054181LL;
int var_16 = 36042798;
signed char arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 17360057936458064421ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -6108640495736634089LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
