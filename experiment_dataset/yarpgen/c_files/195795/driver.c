#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60243;
int var_3 = 1517911908;
long long int var_9 = -804900138526399105LL;
int var_11 = -202812505;
unsigned int var_13 = 3672263387U;
int zero = 0;
short var_16 = (short)14243;
unsigned short var_17 = (unsigned short)38883;
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
