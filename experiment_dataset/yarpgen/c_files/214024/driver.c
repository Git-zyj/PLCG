#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 222939352U;
short var_3 = (short)32528;
int var_7 = -531189218;
int zero = 0;
unsigned long long int var_12 = 8899902076098351517ULL;
unsigned short var_13 = (unsigned short)60381;
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
