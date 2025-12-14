#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26457;
unsigned char var_5 = (unsigned char)122;
signed char var_6 = (signed char)7;
unsigned int var_13 = 1176573736U;
int zero = 0;
short var_14 = (short)-10713;
unsigned int var_15 = 3947371275U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
