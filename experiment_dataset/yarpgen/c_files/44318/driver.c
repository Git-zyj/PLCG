#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1668216754;
unsigned char var_7 = (unsigned char)196;
int zero = 0;
unsigned long long int var_13 = 15018250899616205972ULL;
unsigned long long int var_14 = 4298575946127851106ULL;
signed char var_15 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
