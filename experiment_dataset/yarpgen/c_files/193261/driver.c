#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3843997235U;
signed char var_6 = (signed char)-17;
int var_10 = -549073668;
long long int var_11 = 5013030907778444661LL;
int zero = 0;
long long int var_14 = -6535141676163959692LL;
unsigned char var_15 = (unsigned char)97;
void init() {
}

void checksum() {
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
