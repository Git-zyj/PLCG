#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17279457181929909296ULL;
unsigned short var_7 = (unsigned short)17965;
unsigned long long int var_9 = 1979084540995876817ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)231;
unsigned long long int var_14 = 12436862796497041897ULL;
unsigned short var_15 = (unsigned short)61392;
void init() {
}

void checksum() {
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
