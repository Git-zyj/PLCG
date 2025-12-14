#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4050523443073318624ULL;
unsigned long long int var_4 = 17159993422478246825ULL;
long long int var_13 = 6767929143564806690LL;
int zero = 0;
unsigned int var_18 = 3307906006U;
unsigned short var_19 = (unsigned short)34484;
unsigned int var_20 = 423422313U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
