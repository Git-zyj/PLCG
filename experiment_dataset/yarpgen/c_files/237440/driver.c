#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3731567047U;
unsigned int var_1 = 1675959449U;
short var_4 = (short)-13447;
int zero = 0;
unsigned int var_10 = 511270469U;
long long int var_11 = -6645633943141561333LL;
long long int var_12 = -4994173740315135417LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
