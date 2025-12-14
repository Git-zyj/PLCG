#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9143973772308182792ULL;
unsigned char var_5 = (unsigned char)20;
long long int var_9 = -3939196432123874958LL;
int zero = 0;
short var_13 = (short)-8201;
unsigned long long int var_14 = 13143871805121849713ULL;
long long int var_15 = -6989955313094985871LL;
unsigned long long int var_16 = 3886371735697303367ULL;
signed char var_17 = (signed char)85;
unsigned long long int var_18 = 9836186376610350692ULL;
unsigned short arr_0 [13] ;
unsigned int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)63324;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 3693078715U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
