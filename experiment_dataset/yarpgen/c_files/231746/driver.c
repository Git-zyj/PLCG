#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1711459169;
unsigned short var_4 = (unsigned short)22325;
unsigned char var_5 = (unsigned char)63;
int zero = 0;
unsigned char var_18 = (unsigned char)107;
short var_19 = (short)4455;
unsigned long long int var_20 = 12077439254774109623ULL;
unsigned char var_21 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
