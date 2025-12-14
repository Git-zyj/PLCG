#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-49;
int var_5 = 1673607088;
int zero = 0;
unsigned int var_10 = 840081718U;
unsigned char var_11 = (unsigned char)96;
unsigned long long int var_12 = 89424827290436011ULL;
unsigned long long int var_13 = 13574108079941386184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
