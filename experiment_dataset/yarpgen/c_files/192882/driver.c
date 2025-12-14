#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3405243113U;
signed char var_2 = (signed char)-97;
unsigned int var_7 = 1663568410U;
short var_10 = (short)-30485;
int zero = 0;
int var_11 = -1896320507;
int var_12 = -922640855;
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
