#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -2420583209173688808LL;
unsigned short var_3 = (unsigned short)58940;
short var_4 = (short)-8477;
int var_8 = -520100054;
unsigned int var_9 = 1747298689U;
unsigned long long int var_10 = 4672779302754357330ULL;
unsigned long long int var_12 = 10239889154826292936ULL;
signed char var_13 = (signed char)126;
int zero = 0;
short var_14 = (short)-23081;
signed char var_15 = (signed char)100;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2547046192U;
short var_18 = (short)-11718;
_Bool var_19 = (_Bool)0;
unsigned int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 1392305492U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
