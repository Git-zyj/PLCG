#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 23250996;
short var_3 = (short)-4727;
int var_9 = -357543290;
int zero = 0;
short var_11 = (short)-24713;
signed char var_12 = (signed char)89;
short var_13 = (short)-16689;
int var_14 = -2049153972;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
