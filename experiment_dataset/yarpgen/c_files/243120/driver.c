#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 230898909U;
unsigned int var_6 = 4269991595U;
unsigned long long int var_8 = 11862025606987735943ULL;
unsigned int var_9 = 2338775514U;
unsigned int var_13 = 3633401541U;
unsigned long long int var_14 = 5205349092956199885ULL;
int zero = 0;
unsigned int var_15 = 3480251536U;
unsigned long long int var_16 = 6399592765955852814ULL;
unsigned int var_17 = 2304918575U;
unsigned int var_18 = 4126061588U;
unsigned long long int var_19 = 9185768753571621373ULL;
unsigned long long int var_20 = 14472928800961807844ULL;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_2 [25] [25] [25] ;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 8636893772033945066ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 9860719124793334530ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 12963361958182696663ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
