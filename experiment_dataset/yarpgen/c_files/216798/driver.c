#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-14086;
signed char var_7 = (signed char)57;
short var_8 = (short)19672;
unsigned int var_9 = 290293209U;
unsigned int var_10 = 3256294935U;
long long int var_11 = 8498946162999737667LL;
short var_12 = (short)7966;
unsigned char var_13 = (unsigned char)205;
int zero = 0;
unsigned long long int var_16 = 12743892677596315896ULL;
long long int var_17 = -2065069857398003588LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3718668258U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)23;
int var_22 = 502421788;
unsigned int var_23 = 97045001U;
_Bool var_24 = (_Bool)0;
short arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-15575;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
