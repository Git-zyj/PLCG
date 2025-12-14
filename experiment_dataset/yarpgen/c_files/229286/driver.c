#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
short var_2 = (short)4947;
short var_4 = (short)-20810;
unsigned int var_6 = 444905961U;
int var_11 = 1260871377;
long long int var_12 = 5715407480511457229LL;
unsigned short var_13 = (unsigned short)38643;
int zero = 0;
long long int var_17 = 405226843898276177LL;
long long int var_18 = -6288303673066528726LL;
_Bool var_19 = (_Bool)1;
int var_20 = 1918960577;
unsigned char var_21 = (unsigned char)101;
long long int var_22 = -8566967931426925857LL;
unsigned int var_23 = 2260375336U;
unsigned long long int var_24 = 9624262206858217745ULL;
unsigned int arr_4 [11] [11] ;
unsigned int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 2843024997U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 4116298060U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
