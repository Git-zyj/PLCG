#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62731;
unsigned short var_4 = (unsigned short)61617;
unsigned int var_9 = 3555281523U;
int zero = 0;
unsigned int var_12 = 2463465650U;
unsigned short var_13 = (unsigned short)36853;
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
