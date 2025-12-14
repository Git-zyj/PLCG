#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-7;
unsigned short var_5 = (unsigned short)46374;
signed char var_6 = (signed char)91;
unsigned char var_7 = (unsigned char)64;
unsigned int var_10 = 1366038219U;
int zero = 0;
signed char var_13 = (signed char)37;
unsigned char var_14 = (unsigned char)143;
signed char var_15 = (signed char)-79;
int var_16 = -541573321;
short var_17 = (short)18301;
_Bool arr_0 [24] ;
unsigned short arr_1 [24] ;
int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)9176;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1360367702;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
