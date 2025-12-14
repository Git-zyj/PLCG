#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)6;
long long int var_4 = 6533927501011586584LL;
signed char var_7 = (signed char)-75;
signed char var_12 = (signed char)-33;
int zero = 0;
long long int var_19 = 7191133694891588738LL;
long long int var_20 = 1306280286289851861LL;
signed char var_21 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
