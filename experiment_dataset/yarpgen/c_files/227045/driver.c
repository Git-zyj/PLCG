#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1743542282;
long long int var_9 = -6950575788860701587LL;
unsigned char var_10 = (unsigned char)222;
unsigned long long int var_13 = 2311251341540381715ULL;
unsigned long long int var_14 = 14317547139888467524ULL;
int zero = 0;
long long int var_20 = -6007857795075471834LL;
signed char var_21 = (signed char)40;
unsigned char var_22 = (unsigned char)241;
short var_23 = (short)-24625;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)38230;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
