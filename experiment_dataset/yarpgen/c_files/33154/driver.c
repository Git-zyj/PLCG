#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)110;
signed char var_5 = (signed char)-6;
int zero = 0;
signed char var_13 = (signed char)35;
signed char var_14 = (signed char)-2;
unsigned short var_15 = (unsigned short)51767;
unsigned char var_16 = (unsigned char)29;
signed char var_17 = (signed char)90;
signed char var_18 = (signed char)22;
unsigned short arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)65021;
}

void checksum() {
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
