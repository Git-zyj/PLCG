#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27088;
signed char var_3 = (signed char)83;
long long int var_8 = -1931989302946250307LL;
unsigned int var_11 = 1644342329U;
int var_14 = 820786804;
long long int var_15 = -1556930368336600770LL;
int zero = 0;
unsigned int var_16 = 3759400899U;
signed char var_17 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
