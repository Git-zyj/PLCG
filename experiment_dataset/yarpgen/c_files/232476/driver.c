#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
int var_2 = 49055172;
unsigned char var_3 = (unsigned char)79;
long long int var_6 = -8635850553865260395LL;
long long int var_8 = -4458508739358450355LL;
unsigned int var_9 = 3933321539U;
int var_12 = 1148271342;
int var_14 = -171766141;
int zero = 0;
long long int var_16 = 2037407592635962719LL;
short var_17 = (short)-14993;
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
