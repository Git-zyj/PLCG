#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 804332386502737860LL;
unsigned char var_4 = (unsigned char)20;
unsigned long long int var_6 = 17749245980551833443ULL;
unsigned int var_7 = 1024833004U;
signed char var_10 = (signed char)54;
int zero = 0;
signed char var_13 = (signed char)31;
long long int var_14 = -843507760805045966LL;
unsigned long long int var_15 = 7146858093003915408ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
