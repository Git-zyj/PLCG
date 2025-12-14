#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20427;
unsigned long long int var_3 = 1925177433630527814ULL;
unsigned int var_13 = 2858929446U;
int zero = 0;
unsigned long long int var_19 = 16456839114905328522ULL;
unsigned int var_20 = 4222271408U;
signed char var_21 = (signed char)-12;
unsigned short var_22 = (unsigned short)53196;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
