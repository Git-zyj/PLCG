#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 600798036U;
unsigned int var_1 = 4105381886U;
unsigned char var_2 = (unsigned char)39;
unsigned char var_13 = (unsigned char)81;
int zero = 0;
long long int var_14 = -1667175580357223987LL;
signed char var_15 = (signed char)74;
unsigned char var_16 = (unsigned char)14;
long long int var_17 = 4321457926987003928LL;
long long int var_18 = 7992095626953752182LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
