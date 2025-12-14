#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1206164787U;
unsigned short var_1 = (unsigned short)46687;
signed char var_2 = (signed char)77;
unsigned int var_3 = 1364867769U;
unsigned int var_5 = 1558123174U;
long long int var_7 = 4709249456458763329LL;
long long int var_8 = -6745276123487695046LL;
short var_9 = (short)24942;
int zero = 0;
unsigned short var_10 = (unsigned short)6136;
long long int var_11 = -2359381582631655119LL;
unsigned long long int var_12 = 2298329201775288816ULL;
int var_13 = -1961088944;
unsigned long long int var_14 = 1715749138982956262ULL;
long long int var_15 = 7537069039821909214LL;
signed char arr_0 [20] ;
unsigned short arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)64942;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
