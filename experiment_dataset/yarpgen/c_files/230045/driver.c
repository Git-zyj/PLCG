#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25465;
unsigned char var_7 = (unsigned char)182;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 7316196939301696407ULL;
unsigned short var_15 = (unsigned short)47690;
int zero = 0;
unsigned short var_16 = (unsigned short)8950;
unsigned char var_17 = (unsigned char)112;
unsigned short var_18 = (unsigned short)24846;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
