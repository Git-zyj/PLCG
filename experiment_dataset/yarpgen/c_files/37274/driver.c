#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13683;
short var_6 = (short)-973;
unsigned char var_8 = (unsigned char)59;
unsigned char var_9 = (unsigned char)133;
signed char var_14 = (signed char)7;
int zero = 0;
long long int var_19 = -7178265055385550355LL;
long long int var_20 = -7696507987863883265LL;
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
