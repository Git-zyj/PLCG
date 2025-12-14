#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3956461229078094402LL;
signed char var_7 = (signed char)-96;
signed char var_13 = (signed char)-21;
int zero = 0;
short var_14 = (short)7321;
short var_15 = (short)-24265;
int var_16 = -1225728268;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
