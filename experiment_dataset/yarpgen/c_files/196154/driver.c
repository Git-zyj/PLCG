#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1352090674;
signed char var_3 = (signed char)14;
unsigned char var_9 = (unsigned char)138;
int zero = 0;
unsigned short var_14 = (unsigned short)22136;
unsigned short var_15 = (unsigned short)64928;
int var_16 = -288632642;
signed char var_17 = (signed char)-83;
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
