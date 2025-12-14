#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-24969;
short var_5 = (short)-3586;
unsigned char var_7 = (unsigned char)67;
long long int var_10 = 1841921770000675885LL;
int zero = 0;
unsigned int var_11 = 1016058355U;
long long int var_12 = 2991547423983268243LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
