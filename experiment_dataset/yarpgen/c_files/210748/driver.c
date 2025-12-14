#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3567;
unsigned char var_3 = (unsigned char)43;
unsigned int var_9 = 263762028U;
int var_12 = -1093235906;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = 798502447;
unsigned char var_16 = (unsigned char)123;
int var_17 = -2127694496;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
