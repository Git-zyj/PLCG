#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 837171309U;
short var_12 = (short)-31516;
short var_18 = (short)14469;
unsigned int var_19 = 3238468087U;
int zero = 0;
short var_20 = (short)-10922;
unsigned int var_21 = 2003788478U;
unsigned int var_22 = 4277618965U;
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
