#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7585581020489363952ULL;
unsigned long long int var_7 = 2047564989029536037ULL;
signed char var_9 = (signed char)-46;
signed char var_13 = (signed char)-61;
signed char var_16 = (signed char)11;
int zero = 0;
unsigned long long int var_18 = 7687846991291347120ULL;
signed char var_19 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
