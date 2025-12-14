#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52171;
unsigned char var_13 = (unsigned char)45;
signed char var_14 = (signed char)-111;
unsigned int var_16 = 2181347094U;
int zero = 0;
signed char var_20 = (signed char)116;
long long int var_21 = -6622435799668886009LL;
void init() {
}

void checksum() {
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
