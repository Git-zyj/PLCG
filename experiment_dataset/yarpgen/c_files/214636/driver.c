#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3514538567199967400ULL;
unsigned int var_4 = 3315768736U;
unsigned int var_5 = 3272444928U;
unsigned long long int var_11 = 3031317530892095484ULL;
int zero = 0;
short var_18 = (short)-4659;
unsigned int var_19 = 1892204676U;
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
