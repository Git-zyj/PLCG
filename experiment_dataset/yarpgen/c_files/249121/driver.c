#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)11;
unsigned long long int var_2 = 2891129181935368097ULL;
short var_7 = (short)-20699;
int var_12 = 1668104010;
int zero = 0;
int var_13 = -1918844064;
short var_14 = (short)-27774;
short var_15 = (short)29411;
void init() {
}

void checksum() {
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
