#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7132588062422772394ULL;
unsigned short var_7 = (unsigned short)26168;
short var_11 = (short)23459;
int zero = 0;
short var_12 = (short)5917;
short var_13 = (short)-4418;
signed char var_14 = (signed char)-39;
short var_15 = (short)-4153;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
