#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3278220608U;
unsigned short var_4 = (unsigned short)21613;
unsigned int var_6 = 3666054218U;
int var_7 = 1472144668;
short var_9 = (short)31945;
int zero = 0;
unsigned char var_12 = (unsigned char)148;
short var_13 = (short)-7761;
int var_14 = -1079061637;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
