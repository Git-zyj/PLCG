#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1589409903;
unsigned long long int var_13 = 7398191449969449307ULL;
unsigned char var_14 = (unsigned char)205;
int zero = 0;
unsigned short var_17 = (unsigned short)20538;
unsigned long long int var_18 = 5340255884499868898ULL;
void init() {
}

void checksum() {
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
