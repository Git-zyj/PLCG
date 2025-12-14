#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11546594478743914487ULL;
signed char var_8 = (signed char)2;
signed char var_18 = (signed char)-62;
unsigned long long int var_19 = 17273961923777718733ULL;
int zero = 0;
signed char var_20 = (signed char)-48;
short var_21 = (short)-30964;
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
