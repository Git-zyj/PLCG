#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1303312944;
long long int var_3 = -8818675121131536865LL;
signed char var_4 = (signed char)-34;
short var_5 = (short)21236;
unsigned char var_6 = (unsigned char)68;
long long int var_11 = 7673012573257246138LL;
signed char var_12 = (signed char)87;
int var_16 = -1113924172;
unsigned int var_18 = 3518470599U;
int zero = 0;
unsigned long long int var_20 = 7743011445373339732ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 14325750570009900216ULL;
unsigned long long int var_23 = 2000994163777472028ULL;
signed char var_24 = (signed char)7;
unsigned short arr_1 [18] [18] ;
long long int arr_4 [18] [18] [18] ;
_Bool arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)46264;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2135921868134535898LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
