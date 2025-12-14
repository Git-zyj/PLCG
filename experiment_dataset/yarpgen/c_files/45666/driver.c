#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17549;
short var_5 = (short)-2454;
unsigned int var_9 = 2231647367U;
unsigned int var_17 = 3241391774U;
unsigned char var_19 = (unsigned char)243;
int zero = 0;
unsigned int var_20 = 667471489U;
signed char var_21 = (signed char)72;
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
