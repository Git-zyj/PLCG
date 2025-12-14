#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1233411938U;
unsigned short var_1 = (unsigned short)54604;
unsigned short var_2 = (unsigned short)39308;
short var_3 = (short)-30427;
long long int var_4 = -719134534618363127LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 3954741503207787057LL;
long long int var_8 = 5056286724690520696LL;
long long int var_9 = -8009456590453142026LL;
unsigned int var_10 = 2007469823U;
signed char var_12 = (signed char)68;
unsigned int var_13 = 2358231871U;
int zero = 0;
unsigned char var_15 = (unsigned char)25;
unsigned long long int var_16 = 10798817225384181499ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 15035305011265907203ULL;
unsigned char arr_0 [23] ;
signed char arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-14;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
