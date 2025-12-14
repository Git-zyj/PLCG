#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 8536694714310936227LL;
short var_14 = (short)-10145;
long long int var_15 = 8189788338401070534LL;
unsigned char var_16 = (unsigned char)125;
int zero = 0;
unsigned char var_19 = (unsigned char)11;
long long int var_20 = -7416892659495215506LL;
unsigned char var_21 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
