#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1601593195733346346LL;
unsigned int var_12 = 1392810071U;
unsigned char var_15 = (unsigned char)143;
int zero = 0;
unsigned char var_17 = (unsigned char)219;
unsigned char var_18 = (unsigned char)58;
unsigned long long int var_19 = 4996821798083188454ULL;
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
