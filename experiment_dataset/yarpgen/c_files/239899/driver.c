#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-65;
short var_6 = (short)-5289;
unsigned short var_7 = (unsigned short)5697;
short var_9 = (short)12344;
signed char var_10 = (signed char)-5;
int zero = 0;
short var_15 = (short)24523;
long long int var_16 = -4269367159746183218LL;
void init() {
}

void checksum() {
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
