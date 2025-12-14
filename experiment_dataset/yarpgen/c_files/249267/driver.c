#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)6;
unsigned short var_15 = (unsigned short)46588;
int zero = 0;
unsigned long long int var_18 = 17383672966995267001ULL;
unsigned short var_19 = (unsigned short)59441;
unsigned short var_20 = (unsigned short)64159;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
