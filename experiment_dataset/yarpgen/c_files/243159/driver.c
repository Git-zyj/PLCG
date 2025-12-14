#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 1244890913U;
long long int var_15 = 5053697894652325654LL;
int zero = 0;
unsigned int var_19 = 850149344U;
unsigned char var_20 = (unsigned char)210;
long long int var_21 = -4726474325605236925LL;
long long int var_22 = -5526129598752559661LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
