#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13652;
signed char var_3 = (signed char)114;
short var_5 = (short)-17969;
unsigned long long int var_7 = 14326518627437940670ULL;
short var_8 = (short)-25757;
unsigned long long int var_10 = 788283801962962891ULL;
unsigned int var_15 = 1134295412U;
long long int var_18 = -6824349386008118039LL;
long long int var_19 = 3417071669156357191LL;
int zero = 0;
long long int var_20 = -6493485825707902525LL;
unsigned int var_21 = 2244921107U;
signed char var_22 = (signed char)-31;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)19721;
unsigned long long int arr_0 [20] ;
unsigned long long int arr_6 [20] [20] ;
_Bool arr_8 [20] [20] [20] ;
unsigned long long int arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3991341131767509660ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 5410406590630936730ULL : 10913016598348717341ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3969954003934718235ULL : 9180556853287099123ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
