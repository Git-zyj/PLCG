#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
short var_6 = (short)17530;
short var_9 = (short)-6424;
unsigned short var_11 = (unsigned short)20498;
int zero = 0;
short var_12 = (short)20466;
unsigned char var_13 = (unsigned char)177;
signed char var_14 = (signed char)-97;
unsigned short var_15 = (unsigned short)6069;
short var_16 = (short)25553;
unsigned char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)241;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
