#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5510;
unsigned char var_4 = (unsigned char)83;
_Bool var_9 = (_Bool)1;
int var_12 = -65887375;
signed char var_15 = (signed char)-62;
int zero = 0;
short var_16 = (short)-23343;
long long int var_17 = -8574394267784989221LL;
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
