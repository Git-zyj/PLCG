#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
signed char var_4 = (signed char)-46;
signed char var_6 = (signed char)124;
signed char var_11 = (signed char)-27;
signed char var_12 = (signed char)-35;
signed char var_13 = (signed char)-112;
signed char var_15 = (signed char)-17;
signed char var_19 = (signed char)10;
int zero = 0;
signed char var_20 = (signed char)62;
signed char var_21 = (signed char)-30;
signed char var_22 = (signed char)-64;
signed char var_23 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
