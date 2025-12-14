#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12982669782420964610ULL;
signed char var_7 = (signed char)-37;
int var_9 = -429409840;
unsigned char var_12 = (unsigned char)133;
int zero = 0;
int var_13 = 808196478;
signed char var_14 = (signed char)-86;
unsigned char var_15 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
