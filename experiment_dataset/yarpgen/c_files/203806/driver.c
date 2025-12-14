#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
signed char var_4 = (signed char)-87;
signed char var_5 = (signed char)89;
signed char var_7 = (signed char)107;
signed char var_8 = (signed char)97;
signed char var_9 = (signed char)-98;
signed char var_11 = (signed char)-42;
int zero = 0;
signed char var_13 = (signed char)20;
signed char var_14 = (signed char)73;
signed char var_15 = (signed char)36;
signed char var_16 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
