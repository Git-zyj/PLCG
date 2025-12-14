#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-29570;
long long int var_7 = -7072468212268523149LL;
int zero = 0;
unsigned int var_11 = 3757736098U;
signed char var_12 = (signed char)-96;
unsigned long long int var_13 = 5675185021735567973ULL;
short var_14 = (short)-2232;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
