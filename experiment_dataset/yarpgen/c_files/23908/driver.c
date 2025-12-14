#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4029370539310547171ULL;
short var_2 = (short)29900;
int var_5 = 986751390;
unsigned short var_8 = (unsigned short)28712;
int zero = 0;
unsigned int var_10 = 3284179835U;
unsigned int var_11 = 581682063U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
