#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4901952364906026881ULL;
unsigned short var_8 = (unsigned short)64052;
unsigned short var_10 = (unsigned short)13438;
int zero = 0;
long long int var_12 = 8630228107549965780LL;
short var_13 = (short)31914;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
