#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1725682271269031145LL;
unsigned int var_4 = 163917768U;
int var_7 = 1159522952;
unsigned short var_10 = (unsigned short)26511;
int zero = 0;
int var_13 = 1692644004;
unsigned short var_14 = (unsigned short)53320;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
