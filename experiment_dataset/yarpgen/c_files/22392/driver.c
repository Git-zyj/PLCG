#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)80;
int var_4 = -216910755;
short var_8 = (short)-5165;
int zero = 0;
unsigned char var_13 = (unsigned char)75;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3034210746U;
signed char var_16 = (signed char)105;
signed char var_17 = (signed char)-56;
short arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-28734;
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
