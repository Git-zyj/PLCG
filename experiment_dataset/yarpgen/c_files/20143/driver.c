#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -625762367963492651LL;
long long int var_12 = 7355366966494773367LL;
int zero = 0;
unsigned long long int var_15 = 8699532502792395463ULL;
unsigned char var_16 = (unsigned char)200;
unsigned char var_17 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
