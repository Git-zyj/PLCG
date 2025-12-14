#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)199;
short var_4 = (short)28205;
unsigned char var_6 = (unsigned char)106;
int var_9 = 595453917;
short var_10 = (short)26765;
int var_12 = 251441238;
unsigned char var_13 = (unsigned char)233;
int zero = 0;
short var_14 = (short)29260;
int var_15 = -1013783938;
int var_16 = -1597731601;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
