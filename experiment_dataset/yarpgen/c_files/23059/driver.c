#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22534;
unsigned int var_1 = 3996415315U;
_Bool var_5 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_14 = -679352950;
short var_15 = (short)-20426;
unsigned int var_16 = 1144847330U;
short var_17 = (short)30084;
unsigned int var_18 = 3974547688U;
unsigned long long int var_19 = 6058753821903333809ULL;
unsigned long long int arr_0 [25] ;
_Bool arr_1 [25] [25] ;
long long int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 9241380487601207126ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -2974769862564983576LL : -5155702123290122119LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
