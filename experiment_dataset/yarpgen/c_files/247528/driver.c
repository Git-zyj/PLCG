#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 2130959887809757421LL;
short var_4 = (short)-15917;
short var_6 = (short)7821;
int var_7 = 1057492105;
unsigned long long int var_8 = 16943946245695322240ULL;
short var_11 = (short)-30824;
unsigned char var_15 = (unsigned char)8;
long long int var_18 = -709994541104005381LL;
int zero = 0;
unsigned int var_19 = 4183105456U;
short var_20 = (short)29763;
unsigned long long int var_21 = 15970536408125378941ULL;
short arr_0 [19] [19] ;
unsigned short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)1586;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)27436;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
