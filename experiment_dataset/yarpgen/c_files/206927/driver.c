#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -885776460;
unsigned int var_12 = 3277392924U;
int zero = 0;
unsigned long long int var_17 = 201184302933021995ULL;
unsigned long long int var_18 = 6614663478276081101ULL;
short var_19 = (short)-26321;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
