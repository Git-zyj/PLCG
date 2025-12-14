#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15526489237709549570ULL;
_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-91;
unsigned char var_6 = (unsigned char)13;
unsigned long long int var_8 = 16039656560847057196ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)215;
unsigned long long int var_18 = 6959232893346990216ULL;
long long int var_19 = 8963403100036880122LL;
unsigned long long int var_20 = 16812268627987258046ULL;
long long int var_21 = 3300475131394193273LL;
_Bool arr_3 [13] [13] ;
int arr_5 [13] [13] ;
short arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 46517916;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-29700 : (short)27363;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
