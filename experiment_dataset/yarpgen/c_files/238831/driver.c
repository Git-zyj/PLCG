#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29218;
long long int var_4 = -3283901942366689991LL;
signed char var_16 = (signed char)-102;
short var_19 = (short)-26340;
int zero = 0;
unsigned int var_20 = 2573284074U;
unsigned char var_21 = (unsigned char)117;
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
