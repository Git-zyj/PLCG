#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11057;
unsigned int var_1 = 738894440U;
unsigned int var_3 = 249293769U;
signed char var_18 = (signed char)-77;
int zero = 0;
unsigned int var_19 = 2627989222U;
int var_20 = -1057795746;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
