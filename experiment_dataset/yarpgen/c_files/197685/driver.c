#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
unsigned short var_3 = (unsigned short)20030;
signed char var_5 = (signed char)-58;
short var_7 = (short)6801;
unsigned int var_8 = 2121695996U;
long long int var_9 = 575223110363247991LL;
short var_13 = (short)-30491;
int zero = 0;
signed char var_14 = (signed char)12;
long long int var_15 = -15239190805903257LL;
long long int var_16 = 6607791035345125147LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
