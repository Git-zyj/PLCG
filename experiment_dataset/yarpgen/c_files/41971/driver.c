#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3574510930U;
unsigned char var_7 = (unsigned char)11;
unsigned int var_10 = 1758739203U;
int var_13 = 1979424216;
int zero = 0;
int var_18 = 1573670052;
short var_19 = (short)-6898;
void init() {
}

void checksum() {
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
