#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 187105311;
long long int var_4 = -3568801499346662722LL;
unsigned char var_6 = (unsigned char)60;
int zero = 0;
int var_10 = -1026338541;
unsigned long long int var_11 = 17559384155534583331ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
