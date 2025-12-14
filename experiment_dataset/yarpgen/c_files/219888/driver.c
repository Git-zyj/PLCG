#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
int var_4 = -558512221;
int var_5 = 1783743258;
short var_11 = (short)11576;
unsigned int var_12 = 2614131563U;
long long int var_13 = 5326112017834817985LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 1769831451;
unsigned char var_18 = (unsigned char)247;
signed char var_19 = (signed char)-124;
signed char var_20 = (signed char)58;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)14535;
unsigned short var_23 = (unsigned short)56684;
unsigned long long int arr_2 [20] ;
unsigned int arr_3 [20] ;
signed char arr_5 [25] ;
unsigned long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 15840981769443052994ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1068183143U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 2645259064582608391ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
