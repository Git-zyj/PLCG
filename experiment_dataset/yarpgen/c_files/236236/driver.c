#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7740170237950562339LL;
unsigned long long int var_5 = 7541131564718392187ULL;
unsigned char var_10 = (unsigned char)23;
int var_12 = 763976893;
short var_13 = (short)-25135;
unsigned char var_14 = (unsigned char)204;
int zero = 0;
long long int var_15 = 238954923870924577LL;
unsigned char var_16 = (unsigned char)30;
unsigned long long int var_17 = 17665497066719971278ULL;
signed char var_18 = (signed char)88;
unsigned short var_19 = (unsigned short)40435;
short var_20 = (short)23251;
unsigned short arr_0 [12] [12] ;
short arr_1 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)33297;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)18948;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -6933863805984241408LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
