#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)14204;
unsigned char var_6 = (unsigned char)163;
unsigned short var_8 = (unsigned short)61102;
signed char var_14 = (signed char)55;
int zero = 0;
short var_16 = (short)7516;
unsigned int var_17 = 9375421U;
unsigned char var_18 = (unsigned char)166;
unsigned short var_19 = (unsigned short)9666;
int var_20 = 1610119059;
unsigned char var_21 = (unsigned char)207;
unsigned long long int arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 14223677158573404586ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
