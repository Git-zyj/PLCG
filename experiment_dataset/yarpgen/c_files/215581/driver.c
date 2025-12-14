#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1792585988U;
unsigned char var_3 = (unsigned char)24;
unsigned int var_5 = 4265323402U;
unsigned char var_6 = (unsigned char)101;
unsigned short var_8 = (unsigned short)1186;
int var_13 = 1079485131;
int zero = 0;
int var_14 = -1046286781;
signed char var_15 = (signed char)59;
unsigned int var_16 = 2437907597U;
int var_17 = 29991764;
unsigned long long int var_18 = 4033469418082534294ULL;
unsigned char arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)249;
}

void checksum() {
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
