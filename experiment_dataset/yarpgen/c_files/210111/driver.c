#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11340;
short var_5 = (short)20853;
signed char var_8 = (signed char)21;
short var_9 = (short)-3959;
unsigned short var_13 = (unsigned short)11225;
int zero = 0;
signed char var_14 = (signed char)42;
long long int var_15 = 8164544522642681230LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
