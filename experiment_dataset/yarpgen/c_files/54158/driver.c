#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1313363100U;
unsigned int var_6 = 3287811202U;
unsigned long long int var_7 = 11188450298330543372ULL;
unsigned int var_14 = 4122273771U;
int zero = 0;
unsigned long long int var_18 = 12882515570486899054ULL;
unsigned long long int var_19 = 7390056026179963517ULL;
unsigned long long int var_20 = 3438564329692949031ULL;
unsigned long long int var_21 = 5382004475439334362ULL;
unsigned int var_22 = 2852826296U;
unsigned long long int var_23 = 7508394581344866549ULL;
unsigned int arr_0 [21] [21] ;
unsigned int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 1510192723U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3965292437U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
