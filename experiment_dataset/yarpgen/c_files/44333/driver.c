#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3718981505893155522LL;
short var_2 = (short)6685;
short var_6 = (short)-25144;
unsigned char var_11 = (unsigned char)139;
_Bool var_12 = (_Bool)1;
int var_13 = -1499722799;
int zero = 0;
short var_19 = (short)7483;
unsigned int var_20 = 2691946190U;
void init() {
}

void checksum() {
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
