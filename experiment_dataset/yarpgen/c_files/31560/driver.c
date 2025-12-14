#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30789;
unsigned short var_7 = (unsigned short)13428;
int var_9 = 1125360954;
short var_11 = (short)27667;
short var_13 = (short)-16138;
int zero = 0;
signed char var_14 = (signed char)29;
unsigned int var_15 = 1129165998U;
unsigned char var_16 = (unsigned char)181;
long long int var_17 = 876384318320445769LL;
short var_18 = (short)-4861;
short var_19 = (short)-11272;
short var_20 = (short)6440;
signed char var_21 = (signed char)30;
int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -540425037;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
