#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 240883119;
unsigned char var_3 = (unsigned char)138;
short var_5 = (short)-13166;
signed char var_7 = (signed char)-99;
int zero = 0;
long long int var_16 = -710686622175386183LL;
unsigned char var_17 = (unsigned char)18;
short var_18 = (short)22474;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
