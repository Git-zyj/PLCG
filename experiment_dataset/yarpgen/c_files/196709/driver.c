#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1639148636;
unsigned long long int var_2 = 241590466650525537ULL;
unsigned int var_9 = 1972900360U;
signed char var_11 = (signed char)-80;
int zero = 0;
short var_14 = (short)-28696;
signed char var_15 = (signed char)48;
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
