#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
signed char var_3 = (signed char)58;
signed char var_5 = (signed char)-70;
int var_6 = 155933904;
int var_7 = 2143942508;
int var_10 = -1056553917;
int var_11 = 202756008;
signed char var_12 = (signed char)31;
long long int var_13 = 1733905779878332500LL;
int var_14 = 817158946;
int var_15 = -691800758;
int zero = 0;
signed char var_16 = (signed char)20;
signed char var_17 = (signed char)37;
void init() {
}

void checksum() {
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
