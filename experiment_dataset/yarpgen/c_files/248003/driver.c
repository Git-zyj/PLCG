#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11077;
int var_1 = -200568743;
signed char var_8 = (signed char)-106;
unsigned int var_9 = 3268567147U;
int zero = 0;
signed char var_12 = (signed char)-94;
unsigned int var_13 = 1174581049U;
signed char var_14 = (signed char)72;
signed char var_15 = (signed char)41;
int var_16 = 548623525;
int var_17 = 1127339084;
short var_18 = (short)-1173;
signed char arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-98;
}

void checksum() {
    hash(&seed, var_12);
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
