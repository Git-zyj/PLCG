#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1245611035U;
unsigned short var_2 = (unsigned short)16970;
short var_3 = (short)-735;
short var_4 = (short)-19976;
int var_5 = -1590767117;
unsigned short var_6 = (unsigned short)34694;
short var_7 = (short)18683;
unsigned short var_8 = (unsigned short)23543;
short var_9 = (short)25069;
int var_10 = -766961104;
int var_11 = 1825997692;
int var_12 = -1767979112;
unsigned int var_13 = 2045126825U;
int zero = 0;
unsigned int var_14 = 3660782827U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15322350180952695021ULL;
int var_17 = -1330176415;
unsigned int var_18 = 4128939202U;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12374966931159919453ULL;
unsigned short var_21 = (unsigned short)36478;
unsigned long long int var_22 = 6421091945860373003ULL;
int var_23 = 78557939;
_Bool var_24 = (_Bool)0;
short arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-685 : (short)-5674;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
