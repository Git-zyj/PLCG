#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)47;
long long int var_4 = -652617642776988320LL;
long long int var_6 = -5813034738262431779LL;
signed char var_8 = (signed char)124;
signed char var_10 = (signed char)101;
long long int var_12 = 1387842572748750009LL;
int zero = 0;
signed char var_14 = (signed char)-7;
signed char var_15 = (signed char)-32;
long long int var_16 = 5290042583217742578LL;
void init() {
}

void checksum() {
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
