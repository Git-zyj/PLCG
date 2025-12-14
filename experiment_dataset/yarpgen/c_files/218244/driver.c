#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)76;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 15942335510796489903ULL;
int var_6 = 1792790914;
int zero = 0;
unsigned long long int var_16 = 5011125436225380203ULL;
short var_17 = (short)-8031;
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
