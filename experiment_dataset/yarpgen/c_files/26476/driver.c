#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 410436035;
unsigned short var_4 = (unsigned short)45923;
_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)-37;
signed char var_14 = (signed char)-12;
int zero = 0;
unsigned char var_16 = (unsigned char)20;
unsigned char var_17 = (unsigned char)42;
void init() {
}

void checksum() {
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
