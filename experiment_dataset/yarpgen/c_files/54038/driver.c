#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1247756511;
signed char var_9 = (signed char)-84;
signed char var_11 = (signed char)3;
int zero = 0;
signed char var_20 = (signed char)-30;
unsigned char var_21 = (unsigned char)134;
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
