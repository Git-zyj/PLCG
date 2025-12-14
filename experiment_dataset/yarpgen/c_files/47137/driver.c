#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20683;
unsigned short var_5 = (unsigned short)3068;
signed char var_8 = (signed char)-125;
int zero = 0;
signed char var_10 = (signed char)-41;
signed char var_11 = (signed char)103;
unsigned short var_12 = (unsigned short)44351;
signed char var_13 = (signed char)-16;
unsigned short var_14 = (unsigned short)38403;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
