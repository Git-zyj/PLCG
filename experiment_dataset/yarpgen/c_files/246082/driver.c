#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22754;
unsigned char var_1 = (unsigned char)37;
unsigned long long int var_2 = 4065634363067484608ULL;
unsigned char var_6 = (unsigned char)163;
int zero = 0;
short var_10 = (short)7271;
unsigned char var_11 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
