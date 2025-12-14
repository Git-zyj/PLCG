#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -13634934;
long long int var_10 = 6996236029885297076LL;
long long int var_11 = -1408734318468915035LL;
int zero = 0;
short var_14 = (short)-29343;
long long int var_15 = 1679196476375123665LL;
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
