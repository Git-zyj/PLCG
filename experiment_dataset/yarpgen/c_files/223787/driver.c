#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61947;
signed char var_4 = (signed char)60;
signed char var_5 = (signed char)(-127 - 1);
short var_6 = (short)-30867;
signed char var_7 = (signed char)107;
long long int var_11 = -6773444238193386980LL;
int zero = 0;
long long int var_12 = 4834206250896637121LL;
unsigned int var_13 = 2579111115U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
