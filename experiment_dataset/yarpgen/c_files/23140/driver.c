#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1068174076;
unsigned short var_7 = (unsigned short)21352;
long long int var_11 = -2968756407677437130LL;
int zero = 0;
unsigned short var_16 = (unsigned short)54361;
signed char var_17 = (signed char)-53;
unsigned short var_18 = (unsigned short)20802;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
