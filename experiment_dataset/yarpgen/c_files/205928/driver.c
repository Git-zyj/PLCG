#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3666402938U;
unsigned int var_2 = 605869692U;
unsigned int var_3 = 2263737737U;
unsigned int var_4 = 3944106389U;
signed char var_7 = (signed char)38;
signed char var_8 = (signed char)-60;
unsigned int var_16 = 2280896596U;
signed char var_19 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_20 = 2513675422U;
signed char var_21 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
