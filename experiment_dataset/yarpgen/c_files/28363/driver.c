#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)252;
unsigned short var_4 = (unsigned short)36258;
int var_5 = 650290844;
unsigned short var_6 = (unsigned short)15314;
int var_7 = 1163770327;
int zero = 0;
unsigned short var_10 = (unsigned short)45040;
unsigned short var_11 = (unsigned short)45425;
int var_12 = -1370873670;
unsigned char var_13 = (unsigned char)132;
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
