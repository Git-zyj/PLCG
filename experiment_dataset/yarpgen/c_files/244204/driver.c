#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
signed char var_2 = (signed char)72;
unsigned long long int var_4 = 13941018056464828015ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 1410216724332996648ULL;
unsigned long long int var_8 = 6290916743020171123ULL;
int zero = 0;
unsigned long long int var_10 = 3419684048277111464ULL;
unsigned long long int var_11 = 16551873649531709707ULL;
unsigned char var_12 = (unsigned char)190;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)64;
_Bool var_15 = (_Bool)0;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 18291924955644074758ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 937775176079097416ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
