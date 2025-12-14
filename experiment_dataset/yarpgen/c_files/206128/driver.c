#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned char var_9 = (unsigned char)79;
int zero = 0;
unsigned char var_13 = (unsigned char)241;
unsigned char var_14 = (unsigned char)215;
unsigned char var_15 = (unsigned char)221;
unsigned char var_16 = (unsigned char)177;
unsigned char var_17 = (unsigned char)48;
unsigned char var_18 = (unsigned char)85;
unsigned char var_19 = (unsigned char)76;
unsigned char var_20 = (unsigned char)204;
unsigned char var_21 = (unsigned char)13;
unsigned char var_22 = (unsigned char)249;
unsigned char var_23 = (unsigned char)161;
unsigned char var_24 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
