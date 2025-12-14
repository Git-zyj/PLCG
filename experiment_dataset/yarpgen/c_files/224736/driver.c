#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20341;
unsigned int var_7 = 2729682979U;
signed char var_8 = (signed char)5;
int zero = 0;
unsigned long long int var_11 = 7703509767411831465ULL;
unsigned int var_12 = 3804781021U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
