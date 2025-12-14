#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1885734425U;
unsigned short var_3 = (unsigned short)15301;
signed char var_5 = (signed char)-102;
long long int var_6 = -7022980961838308865LL;
signed char var_7 = (signed char)-74;
signed char var_9 = (signed char)-30;
signed char var_15 = (signed char)118;
int zero = 0;
short var_16 = (short)20267;
unsigned short var_17 = (unsigned short)37102;
signed char var_18 = (signed char)64;
signed char var_19 = (signed char)-69;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-11;
_Bool var_22 = (_Bool)1;
long long int arr_3 [25] ;
long long int arr_9 [25] [25] [25] [25] [25] ;
int arr_14 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -769669217918569303LL : -467992432002447621LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -6471621481405645118LL : -5878098330672947152LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -1508526558 : 2130795978;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
