#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3404552624U;
signed char var_8 = (signed char)-44;
unsigned int var_9 = 6011384U;
unsigned int var_10 = 1532356901U;
int zero = 0;
unsigned int var_12 = 2732235564U;
int var_13 = 1816995257;
unsigned short var_14 = (unsigned short)42134;
int var_15 = 266100850;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
