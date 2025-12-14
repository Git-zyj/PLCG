#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8633072712731960723LL;
signed char var_9 = (signed char)-8;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)42;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)3;
signed char var_19 = (signed char)107;
signed char var_20 = (signed char)100;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-101;
_Bool arr_0 [24] ;
signed char arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)14;
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
