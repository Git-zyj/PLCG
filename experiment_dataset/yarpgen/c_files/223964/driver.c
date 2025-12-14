#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -645383639;
unsigned short var_7 = (unsigned short)47396;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1827628268U;
int var_11 = -673122152;
unsigned char var_13 = (unsigned char)52;
int zero = 0;
unsigned char var_14 = (unsigned char)175;
unsigned long long int var_15 = 17574441783446840119ULL;
short var_16 = (short)-25095;
void init() {
}

void checksum() {
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
