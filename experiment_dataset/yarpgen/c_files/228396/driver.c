#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
short var_1 = (short)4992;
unsigned long long int var_5 = 18322663253835541754ULL;
long long int var_8 = 8065585062088691080LL;
unsigned int var_9 = 1485925335U;
short var_10 = (short)2711;
int zero = 0;
signed char var_11 = (signed char)-124;
signed char var_12 = (signed char)11;
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
