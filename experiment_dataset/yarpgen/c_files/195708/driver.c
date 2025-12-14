#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)228;
long long int var_6 = -6314970636040808911LL;
unsigned char var_12 = (unsigned char)158;
int zero = 0;
unsigned char var_19 = (unsigned char)170;
unsigned char var_20 = (unsigned char)191;
unsigned char var_21 = (unsigned char)141;
unsigned char var_22 = (unsigned char)146;
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
