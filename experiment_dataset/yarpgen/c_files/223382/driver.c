#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2026104926U;
unsigned char var_5 = (unsigned char)7;
unsigned char var_9 = (unsigned char)237;
long long int var_10 = -2215160971244239831LL;
unsigned int var_11 = 2770049868U;
int zero = 0;
long long int var_12 = -7437418321453484638LL;
int var_13 = -406185462;
void init() {
}

void checksum() {
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
