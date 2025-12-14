#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1219233252732403187LL;
signed char var_7 = (signed char)-78;
unsigned short var_12 = (unsigned short)43222;
long long int var_16 = -6382877406154815878LL;
int zero = 0;
unsigned int var_20 = 1242664470U;
short var_21 = (short)-1311;
unsigned int var_22 = 2992864055U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
