#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46821;
unsigned long long int var_1 = 7277437209310749774ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1849900613U;
unsigned int var_4 = 1210815070U;
unsigned short var_14 = (unsigned short)29759;
int zero = 0;
int var_17 = 800561320;
unsigned int var_18 = 2863678166U;
unsigned int var_19 = 4237756963U;
unsigned int var_20 = 1667061034U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)127;
unsigned long long int var_23 = 6054226507893603688ULL;
_Bool arr_1 [17] ;
int arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1672555130;
}

void checksum() {
    hash(&seed, var_17);
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
