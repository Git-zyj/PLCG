#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -178733975;
signed char var_3 = (signed char)101;
long long int var_4 = 3424326516699852972LL;
short var_6 = (short)-5122;
int var_7 = -1068127950;
unsigned int var_8 = 3440916192U;
signed char var_9 = (signed char)-57;
int zero = 0;
signed char var_13 = (signed char)-119;
long long int var_14 = 5025844728860780858LL;
unsigned long long int var_15 = 9007226476064691134ULL;
signed char var_16 = (signed char)-83;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 159360650U;
long long int var_19 = -8721177118990482178LL;
unsigned int arr_2 [12] [12] ;
unsigned int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 843852075U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1282204217U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
