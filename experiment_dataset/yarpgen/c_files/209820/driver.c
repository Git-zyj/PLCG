#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-63;
unsigned char var_16 = (unsigned char)253;
unsigned int var_19 = 1147212219U;
int zero = 0;
long long int var_20 = 2688061518723195507LL;
unsigned long long int var_21 = 4730108283016133814ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
