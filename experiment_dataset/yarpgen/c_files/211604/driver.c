#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)69;
long long int var_8 = -5111741306773341323LL;
unsigned short var_14 = (unsigned short)62960;
short var_17 = (short)25354;
int zero = 0;
int var_20 = -62087176;
unsigned short var_21 = (unsigned short)53221;
unsigned int var_22 = 3886033140U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
