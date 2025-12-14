#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
unsigned char var_9 = (unsigned char)119;
unsigned char var_16 = (unsigned char)154;
unsigned char var_17 = (unsigned char)144;
int zero = 0;
unsigned char var_18 = (unsigned char)80;
unsigned char var_19 = (unsigned char)52;
unsigned char var_20 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
