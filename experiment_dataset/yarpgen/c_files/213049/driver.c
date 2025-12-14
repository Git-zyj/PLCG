#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -632677937;
unsigned long long int var_7 = 7141777499600131951ULL;
unsigned long long int var_8 = 5578973899087121183ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)207;
long long int var_15 = -3403775496836948938LL;
void init() {
}

void checksum() {
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
