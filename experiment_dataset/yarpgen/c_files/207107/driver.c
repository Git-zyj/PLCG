#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)102;
unsigned long long int var_6 = 1748193611109663213ULL;
unsigned char var_9 = (unsigned char)53;
int zero = 0;
signed char var_12 = (signed char)54;
signed char var_13 = (signed char)21;
unsigned long long int var_14 = 4525426020970368398ULL;
void init() {
}

void checksum() {
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
