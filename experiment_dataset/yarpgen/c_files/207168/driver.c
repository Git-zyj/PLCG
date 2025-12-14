#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11546623768877179222ULL;
int var_8 = 1908791174;
signed char var_9 = (signed char)-70;
int zero = 0;
int var_12 = 38740286;
unsigned long long int var_13 = 6645750127344536607ULL;
short var_14 = (short)640;
unsigned short var_15 = (unsigned short)33360;
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
