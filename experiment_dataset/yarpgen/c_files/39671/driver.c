#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1830878862U;
unsigned char var_1 = (unsigned char)151;
signed char var_3 = (signed char)16;
unsigned int var_4 = 849084251U;
int zero = 0;
signed char var_13 = (signed char)42;
signed char var_14 = (signed char)-77;
long long int var_15 = -1516778121082667213LL;
long long int var_16 = -6246913811833966209LL;
unsigned char var_17 = (unsigned char)35;
unsigned long long int var_18 = 9382457664819768772ULL;
signed char arr_0 [14] ;
int arr_1 [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1066798093;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 4914806439574825328ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
