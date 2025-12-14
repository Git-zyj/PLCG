#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2713129562U;
unsigned int var_2 = 1167906543U;
int zero = 0;
unsigned short var_18 = (unsigned short)15830;
unsigned short var_19 = (unsigned short)31511;
unsigned short var_20 = (unsigned short)41341;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
