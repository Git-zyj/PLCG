#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)81;
unsigned long long int var_7 = 7733768764719029881ULL;
long long int var_8 = 6652955775545310052LL;
unsigned char var_11 = (unsigned char)245;
short var_13 = (short)-1106;
unsigned int var_14 = 928344185U;
int zero = 0;
unsigned char var_17 = (unsigned char)113;
unsigned int var_18 = 1671041645U;
signed char var_19 = (signed char)55;
unsigned short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)36444;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
