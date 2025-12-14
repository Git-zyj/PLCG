#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_17 = 15179111846626562179ULL;
unsigned short var_18 = (unsigned short)29688;
int zero = 0;
unsigned short var_19 = (unsigned short)20448;
signed char var_20 = (signed char)60;
unsigned int var_21 = 1431549332U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
