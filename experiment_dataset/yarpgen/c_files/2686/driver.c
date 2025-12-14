#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5959389584546025056LL;
unsigned char var_6 = (unsigned char)254;
long long int var_11 = -3647690838111967657LL;
int zero = 0;
unsigned char var_15 = (unsigned char)186;
long long int var_16 = 1582359520177188091LL;
unsigned char var_17 = (unsigned char)190;
unsigned char var_18 = (unsigned char)209;
void init() {
}

void checksum() {
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
