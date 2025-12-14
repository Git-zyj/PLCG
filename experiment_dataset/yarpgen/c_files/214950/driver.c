#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
_Bool var_4 = (_Bool)1;
signed char var_14 = (signed char)54;
int zero = 0;
unsigned long long int var_15 = 5784965350127330616ULL;
unsigned long long int var_16 = 17780237265457009118ULL;
void init() {
}

void checksum() {
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
