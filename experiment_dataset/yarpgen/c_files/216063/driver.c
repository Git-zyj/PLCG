#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6496310261338210605LL;
long long int var_4 = 6348714179743453667LL;
unsigned char var_7 = (unsigned char)225;
long long int var_11 = -907620677690074352LL;
int zero = 0;
unsigned char var_17 = (unsigned char)172;
unsigned char var_18 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
