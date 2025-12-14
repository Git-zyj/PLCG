#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 112133734;
unsigned long long int var_5 = 13471549935631813328ULL;
signed char var_9 = (signed char)-23;
int zero = 0;
int var_14 = 1452977217;
unsigned long long int var_15 = 6697211132358488536ULL;
void init() {
}

void checksum() {
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
