#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
unsigned int var_2 = 3756121181U;
int var_3 = 1272732027;
unsigned int var_6 = 1089044825U;
int var_7 = 1996738936;
unsigned char var_8 = (unsigned char)101;
unsigned int var_9 = 337734064U;
int zero = 0;
short var_10 = (short)216;
long long int var_11 = -7141978136701410232LL;
unsigned char var_12 = (unsigned char)84;
signed char var_13 = (signed char)-61;
unsigned short var_14 = (unsigned short)24440;
signed char var_15 = (signed char)-118;
short arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)6402;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
