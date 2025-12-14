#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25410;
long long int var_7 = 1982638415386846491LL;
unsigned int var_8 = 3822359133U;
unsigned int var_9 = 4004896309U;
unsigned int var_14 = 3855715488U;
signed char var_18 = (signed char)78;
int zero = 0;
long long int var_20 = 2640688000254051324LL;
signed char var_21 = (signed char)52;
signed char var_22 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
