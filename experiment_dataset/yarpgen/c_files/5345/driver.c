#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 281917323;
unsigned int var_7 = 1678793025U;
unsigned long long int var_8 = 10748788282809529786ULL;
unsigned short var_9 = (unsigned short)41440;
int zero = 0;
unsigned long long int var_12 = 8141772436498959611ULL;
unsigned int var_13 = 843410719U;
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
