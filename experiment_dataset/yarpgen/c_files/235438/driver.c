#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47067;
int var_7 = -1990905139;
int var_9 = -778996379;
unsigned short var_10 = (unsigned short)20733;
signed char var_11 = (signed char)-35;
int zero = 0;
int var_15 = 1809162202;
unsigned long long int var_16 = 4239746838791780701ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
