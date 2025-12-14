#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
int var_1 = -873472312;
unsigned int var_2 = 1811610414U;
unsigned short var_8 = (unsigned short)4424;
long long int var_10 = -3673195868373443001LL;
signed char var_13 = (signed char)68;
int var_14 = 79770930;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-23;
signed char var_19 = (signed char)-108;
long long int var_20 = -8503785048273523455LL;
short var_21 = (short)20918;
signed char var_22 = (signed char)85;
unsigned long long int arr_0 [17] ;
short arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 16331693900747546867ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-19767;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
