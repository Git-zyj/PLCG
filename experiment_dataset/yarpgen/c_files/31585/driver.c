#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
short var_7 = (short)13609;
short var_9 = (short)-29166;
unsigned int var_12 = 334676076U;
unsigned long long int var_19 = 10103866987757000784ULL;
int zero = 0;
unsigned int var_20 = 3079285813U;
short var_21 = (short)-15057;
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
