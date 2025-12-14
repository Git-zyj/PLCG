#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)44546;
short var_5 = (short)-14866;
unsigned char var_6 = (unsigned char)6;
unsigned char var_10 = (unsigned char)185;
signed char var_12 = (signed char)-56;
unsigned char var_17 = (unsigned char)74;
int zero = 0;
short var_18 = (short)10983;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
