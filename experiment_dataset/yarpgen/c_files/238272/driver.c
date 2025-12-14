#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45970;
short var_14 = (short)14905;
unsigned short var_16 = (unsigned short)27202;
int zero = 0;
long long int var_18 = 5229904263830373277LL;
signed char var_19 = (signed char)61;
signed char var_20 = (signed char)-32;
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
