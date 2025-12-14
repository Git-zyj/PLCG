#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
signed char var_2 = (signed char)37;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-12103;
unsigned long long int var_10 = 16381171167800087084ULL;
unsigned long long int var_11 = 853234561267179116ULL;
short var_13 = (short)22319;
int var_17 = 1934715561;
int zero = 0;
signed char var_18 = (signed char)35;
short var_19 = (short)-11947;
unsigned long long int arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 11755067022572603967ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
