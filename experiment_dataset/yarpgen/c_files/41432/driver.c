#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8359795920775883559LL;
unsigned int var_2 = 1695953131U;
signed char var_3 = (signed char)-21;
short var_4 = (short)-18500;
unsigned int var_5 = 1589855478U;
short var_7 = (short)-17955;
long long int var_10 = 5551759109674225781LL;
short var_12 = (short)19259;
long long int var_13 = 1669516274444425130LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 293302340U;
signed char var_16 = (signed char)96;
unsigned int var_17 = 3638434474U;
unsigned int var_18 = 756577184U;
_Bool var_19 = (_Bool)0;
signed char arr_8 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)50;
}

void checksum() {
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
