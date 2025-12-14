#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1820218196U;
short var_4 = (short)-529;
unsigned int var_5 = 1319674570U;
unsigned int var_6 = 732039438U;
int var_7 = 1823957186;
signed char var_9 = (signed char)-107;
short var_10 = (short)21832;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-88;
unsigned int var_14 = 608556705U;
unsigned int var_15 = 2458787364U;
int var_16 = 280515222;
int var_17 = -1441452072;
signed char arr_6 [16] [16] ;
long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-126 : (signed char)-53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -6703020734648339552LL : -1421100078526100798LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
