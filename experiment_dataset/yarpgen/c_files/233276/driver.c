#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -960388711;
long long int var_7 = -6333400849445779252LL;
unsigned int var_9 = 1057200883U;
int zero = 0;
signed char var_13 = (signed char)56;
unsigned int var_14 = 3716333130U;
void init() {
}

void checksum() {
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
