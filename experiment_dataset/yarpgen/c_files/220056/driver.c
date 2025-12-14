#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2861227353U;
short var_3 = (short)32221;
int var_4 = -168982873;
unsigned int var_7 = 3393966614U;
int var_11 = -1790224970;
int zero = 0;
unsigned int var_13 = 2466705287U;
unsigned int var_14 = 4085472781U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
