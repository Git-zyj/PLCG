#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7148;
unsigned short var_16 = (unsigned short)11877;
unsigned long long int var_17 = 11388329300821721500ULL;
unsigned short var_18 = (unsigned short)59069;
int zero = 0;
signed char var_19 = (signed char)115;
short var_20 = (short)23632;
int var_21 = -1946491822;
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
