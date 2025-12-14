#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
long long int var_2 = 5792940548098930297LL;
long long int var_9 = -5190118341371131639LL;
short var_13 = (short)-29022;
int zero = 0;
unsigned short var_15 = (unsigned short)50796;
long long int var_16 = 144945226258334472LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
