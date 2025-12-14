#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2447271851896228720LL;
long long int var_5 = 519795530694257110LL;
long long int var_7 = 8778966296318647948LL;
unsigned char var_8 = (unsigned char)157;
int zero = 0;
unsigned char var_11 = (unsigned char)153;
long long int var_12 = -3764660406012491758LL;
unsigned char var_13 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
