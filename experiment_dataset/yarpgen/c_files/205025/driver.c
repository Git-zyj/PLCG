#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1674471480;
int var_4 = 1098463284;
unsigned long long int var_7 = 10413429618673052844ULL;
int zero = 0;
int var_11 = 1671807717;
unsigned short var_12 = (unsigned short)59556;
short var_13 = (short)23148;
unsigned short var_14 = (unsigned short)56717;
unsigned long long int var_15 = 12996555998088524827ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
