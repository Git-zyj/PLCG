#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9581105667874443510ULL;
unsigned int var_2 = 2185068838U;
unsigned int var_5 = 2397369273U;
short var_9 = (short)-29333;
int zero = 0;
unsigned long long int var_12 = 11299510385728841509ULL;
unsigned int var_13 = 3951370049U;
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
