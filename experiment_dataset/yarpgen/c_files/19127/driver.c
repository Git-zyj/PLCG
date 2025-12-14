#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
signed char var_4 = (signed char)-113;
unsigned int var_8 = 2191482056U;
short var_9 = (short)-16497;
unsigned short var_17 = (unsigned short)61828;
int zero = 0;
long long int var_20 = -1955332428497693618LL;
int var_21 = -1333814497;
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
