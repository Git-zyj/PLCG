#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-45;
signed char var_3 = (signed char)70;
signed char var_11 = (signed char)-120;
int zero = 0;
signed char var_13 = (signed char)-46;
signed char var_14 = (signed char)81;
signed char var_15 = (signed char)39;
signed char var_16 = (signed char)34;
signed char var_17 = (signed char)-64;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
