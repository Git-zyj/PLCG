#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6405459795098615043ULL;
unsigned char var_1 = (unsigned char)47;
short var_2 = (short)-4832;
signed char var_5 = (signed char)49;
unsigned int var_7 = 3217910669U;
int zero = 0;
unsigned char var_12 = (unsigned char)122;
unsigned char var_13 = (unsigned char)62;
unsigned int var_14 = 1118916332U;
unsigned int var_15 = 2077565961U;
unsigned long long int arr_2 [18] ;
long long int arr_3 [18] [18] [18] ;
unsigned long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 18165028243776577259ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5855474702437840870LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 12108972327354685151ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
