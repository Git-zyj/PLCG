#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
unsigned char var_2 = (unsigned char)178;
int var_3 = -1063577435;
unsigned int var_4 = 3845229137U;
long long int var_7 = 5368904167175336414LL;
long long int var_8 = -258136504478712182LL;
signed char var_14 = (signed char)67;
int var_17 = 763361504;
int zero = 0;
long long int var_18 = -8555257031712420727LL;
short var_19 = (short)2434;
unsigned short var_20 = (unsigned short)4262;
unsigned int var_21 = 2973018825U;
int arr_0 [20] [20] ;
long long int arr_1 [20] ;
signed char arr_2 [20] [20] [20] ;
unsigned char arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1619175610;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -2658187013971847487LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)91 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
