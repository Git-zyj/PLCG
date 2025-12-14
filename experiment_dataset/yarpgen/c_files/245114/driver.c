#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3065996218U;
int var_3 = 678937715;
short var_4 = (short)25139;
unsigned char var_7 = (unsigned char)0;
unsigned short var_12 = (unsigned short)61423;
int zero = 0;
unsigned short var_13 = (unsigned short)5987;
unsigned int var_14 = 1389526517U;
void init() {
}

void checksum() {
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
