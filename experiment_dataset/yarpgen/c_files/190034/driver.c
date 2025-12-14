#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1204089518U;
short var_2 = (short)-4665;
unsigned int var_6 = 2897259392U;
long long int var_8 = 3903884414463046238LL;
int zero = 0;
signed char var_12 = (signed char)-20;
unsigned int var_13 = 2785595003U;
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
