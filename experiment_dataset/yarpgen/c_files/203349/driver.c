#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1000020825U;
int var_2 = 341372018;
int var_6 = 1749150803;
unsigned long long int var_9 = 16888093403658114039ULL;
unsigned short var_10 = (unsigned short)27915;
int zero = 0;
unsigned int var_12 = 822047268U;
long long int var_13 = 455727246046754704LL;
int var_14 = 891743263;
int var_15 = 59494472;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
