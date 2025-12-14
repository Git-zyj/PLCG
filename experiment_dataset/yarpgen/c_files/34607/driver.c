#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1841194677U;
short var_6 = (short)-2227;
unsigned int var_8 = 3616988908U;
int zero = 0;
long long int var_12 = -7572832517686519546LL;
int var_13 = 1301202760;
short var_14 = (short)-26166;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
