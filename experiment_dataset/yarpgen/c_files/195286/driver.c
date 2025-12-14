#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1655349559090395984ULL;
unsigned short var_8 = (unsigned short)34918;
signed char var_11 = (signed char)-104;
int zero = 0;
unsigned long long int var_14 = 3957272053321066135ULL;
signed char var_15 = (signed char)92;
unsigned int var_16 = 1617195356U;
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
