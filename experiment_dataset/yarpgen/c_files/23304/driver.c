#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29641;
unsigned short var_1 = (unsigned short)42711;
unsigned short var_5 = (unsigned short)31981;
unsigned short var_6 = (unsigned short)46579;
unsigned short var_7 = (unsigned short)28891;
int zero = 0;
int var_10 = 183762184;
unsigned short var_11 = (unsigned short)50128;
int var_12 = -208360703;
int var_13 = -889086990;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
