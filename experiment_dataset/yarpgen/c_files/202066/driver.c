#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)7;
unsigned int var_10 = 3713198959U;
unsigned char var_14 = (unsigned char)231;
int zero = 0;
unsigned int var_17 = 2920107466U;
unsigned char var_18 = (unsigned char)157;
unsigned char var_19 = (unsigned char)123;
unsigned int var_20 = 4280328867U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
