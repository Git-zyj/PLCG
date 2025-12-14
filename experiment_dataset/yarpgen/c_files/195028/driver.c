#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)45;
unsigned char var_7 = (unsigned char)50;
unsigned short var_17 = (unsigned short)58527;
int zero = 0;
unsigned int var_18 = 4101045278U;
signed char var_19 = (signed char)71;
long long int var_20 = -8328146503215647496LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
