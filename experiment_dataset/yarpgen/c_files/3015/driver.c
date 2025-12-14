#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13015;
unsigned int var_3 = 1109000837U;
int var_4 = -2132674322;
unsigned long long int var_5 = 2267475229870204141ULL;
short var_6 = (short)20676;
int var_9 = 1590433074;
int zero = 0;
long long int var_11 = 9114191905047784491LL;
signed char var_12 = (signed char)-42;
short var_13 = (short)-23386;
long long int var_14 = 7503668518922328506LL;
unsigned long long int var_15 = 7146327368023463604ULL;
unsigned char arr_0 [20] ;
long long int arr_1 [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2429905524803250064LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)92;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
