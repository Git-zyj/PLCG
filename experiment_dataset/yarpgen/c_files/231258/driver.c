#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)18;
unsigned char var_5 = (unsigned char)28;
int var_6 = -2058673283;
short var_7 = (short)5041;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)119;
int zero = 0;
unsigned char var_14 = (unsigned char)230;
unsigned short var_15 = (unsigned short)47323;
unsigned char var_16 = (unsigned char)74;
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
