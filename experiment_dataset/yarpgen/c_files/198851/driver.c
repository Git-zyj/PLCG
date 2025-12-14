#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)13;
int var_11 = -1038348135;
unsigned long long int var_12 = 7905669431720172859ULL;
int zero = 0;
signed char var_14 = (signed char)-85;
unsigned short var_15 = (unsigned short)36877;
void init() {
}

void checksum() {
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
