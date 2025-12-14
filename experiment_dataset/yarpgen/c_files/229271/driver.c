#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)25;
signed char var_8 = (signed char)17;
unsigned long long int var_10 = 8579331905812238660ULL;
unsigned long long int var_11 = 9190919359621845484ULL;
int zero = 0;
int var_18 = 1718537914;
unsigned char var_19 = (unsigned char)0;
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
