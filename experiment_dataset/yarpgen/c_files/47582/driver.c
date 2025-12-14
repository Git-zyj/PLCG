#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-33;
signed char var_2 = (signed char)-50;
unsigned short var_3 = (unsigned short)23374;
int var_4 = 1404890404;
unsigned char var_6 = (unsigned char)175;
unsigned short var_10 = (unsigned short)11033;
unsigned char var_11 = (unsigned char)170;
long long int var_12 = -2632869374818044314LL;
unsigned short var_13 = (unsigned short)54296;
short var_14 = (short)-13983;
int zero = 0;
unsigned int var_16 = 3346742755U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
