#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 543862137U;
short var_3 = (short)-1202;
unsigned long long int var_4 = 18027400149864405766ULL;
short var_17 = (short)-10076;
int zero = 0;
short var_20 = (short)20913;
unsigned int var_21 = 486558095U;
void init() {
}

void checksum() {
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
