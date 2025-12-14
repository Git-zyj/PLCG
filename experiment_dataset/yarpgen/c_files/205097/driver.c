#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13277314944570916773ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 11939882360337815710ULL;
unsigned int var_12 = 1365043047U;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)22;
short var_17 = (short)-5922;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
