#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-73;
signed char var_3 = (signed char)99;
unsigned int var_8 = 1382470541U;
unsigned int var_9 = 3520627261U;
unsigned short var_12 = (unsigned short)56759;
int zero = 0;
signed char var_14 = (signed char)65;
unsigned char var_15 = (unsigned char)191;
long long int var_16 = 1910521240913022869LL;
unsigned char var_17 = (unsigned char)114;
short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)25305;
}

void checksum() {
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
