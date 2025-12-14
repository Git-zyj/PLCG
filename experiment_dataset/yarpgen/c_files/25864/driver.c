#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)166;
unsigned int var_5 = 1642540450U;
int var_6 = 421209682;
unsigned char var_8 = (unsigned char)46;
unsigned int var_9 = 556408909U;
int zero = 0;
unsigned long long int var_10 = 10363707296207105798ULL;
long long int var_11 = -3767320943340227303LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
