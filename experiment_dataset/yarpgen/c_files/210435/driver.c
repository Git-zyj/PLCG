#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2566287168U;
signed char var_7 = (signed char)-1;
unsigned char var_8 = (unsigned char)62;
_Bool var_9 = (_Bool)1;
short var_11 = (short)31601;
int zero = 0;
unsigned int var_13 = 2527430402U;
short var_14 = (short)-10639;
unsigned short var_15 = (unsigned short)49400;
unsigned int var_16 = 3407861913U;
unsigned int var_17 = 4202301844U;
long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2001433040742331784LL : 3361969352010011380LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
