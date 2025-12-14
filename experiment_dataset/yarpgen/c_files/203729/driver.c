#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1823318374622995038LL;
unsigned char var_2 = (unsigned char)47;
long long int var_4 = 2976063681744883858LL;
unsigned char var_5 = (unsigned char)231;
unsigned int var_6 = 473678721U;
long long int var_13 = 2632582639564926110LL;
int zero = 0;
unsigned long long int var_14 = 6165888234334784605ULL;
unsigned long long int var_15 = 11994775770151928925ULL;
unsigned long long int var_16 = 4013360340749929628ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
