#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1964962623;
long long int var_1 = -1460742419076278152LL;
unsigned int var_3 = 2360026118U;
int var_4 = -1690227682;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)236;
long long int var_13 = -7217946756335953736LL;
_Bool var_14 = (_Bool)0;
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
