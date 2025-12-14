#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)188;
unsigned char var_5 = (unsigned char)168;
signed char var_9 = (signed char)-84;
long long int var_15 = 5039790922035174060LL;
unsigned char var_16 = (unsigned char)32;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)18567;
unsigned int var_19 = 3553330257U;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)101;
unsigned char var_22 = (unsigned char)127;
short var_23 = (short)22826;
short var_24 = (short)31890;
int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 982188841 : -2061479298;
}

void checksum() {
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
