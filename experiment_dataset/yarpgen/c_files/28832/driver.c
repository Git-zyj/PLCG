#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)34;
unsigned long long int var_8 = 11209022850242214026ULL;
unsigned char var_12 = (unsigned char)230;
int zero = 0;
unsigned long long int var_13 = 217677713134588843ULL;
unsigned char var_14 = (unsigned char)122;
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
