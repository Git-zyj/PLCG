#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_13 = 4128258237923275016ULL;
short var_14 = (short)-31126;
unsigned char var_15 = (unsigned char)60;
int zero = 0;
unsigned char var_16 = (unsigned char)20;
signed char var_17 = (signed char)-18;
unsigned char var_18 = (unsigned char)6;
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
