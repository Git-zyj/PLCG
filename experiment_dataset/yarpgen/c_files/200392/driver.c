#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)221;
unsigned char var_12 = (unsigned char)150;
unsigned char var_14 = (unsigned char)184;
unsigned char var_15 = (unsigned char)17;
int zero = 0;
unsigned char var_17 = (unsigned char)136;
unsigned char var_18 = (unsigned char)253;
unsigned char var_19 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
