#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4494737870856741673ULL;
signed char var_4 = (signed char)4;
int zero = 0;
signed char var_13 = (signed char)-7;
signed char var_14 = (signed char)126;
unsigned int var_15 = 2485789119U;
signed char var_16 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
