#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 985314526U;
int var_3 = -364621179;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)30830;
int var_9 = 313554809;
int zero = 0;
long long int var_10 = -811053342564148195LL;
short var_11 = (short)-15302;
unsigned short var_12 = (unsigned short)14900;
unsigned char var_13 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
