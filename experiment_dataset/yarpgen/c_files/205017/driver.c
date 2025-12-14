#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15434495894274881888ULL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-104;
signed char var_8 = (signed char)84;
int var_12 = 1235943130;
unsigned long long int var_14 = 6274065974180840052ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)245;
int var_19 = -1634541904;
unsigned long long int var_20 = 15227695715280874610ULL;
unsigned long long int var_21 = 12585342536581766505ULL;
signed char var_22 = (signed char)-61;
signed char arr_0 [12] [12] ;
signed char arr_1 [12] ;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-90 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)74 : (signed char)-101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1229937816 : 1226157173;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
