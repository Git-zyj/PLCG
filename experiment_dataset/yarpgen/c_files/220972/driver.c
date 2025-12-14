#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -583485411;
int var_3 = 405130222;
long long int var_4 = -5689475670789706948LL;
long long int var_7 = -418909138886494697LL;
unsigned int var_10 = 3789701982U;
long long int var_11 = -8131715105500781669LL;
unsigned int var_12 = 362797435U;
int zero = 0;
unsigned int var_15 = 3520396363U;
int var_16 = 347366555;
unsigned int var_17 = 3322002039U;
unsigned int var_18 = 155273427U;
long long int var_19 = 4491790437566794706LL;
unsigned int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 329696725U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
