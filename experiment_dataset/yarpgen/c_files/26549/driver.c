#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
unsigned long long int var_2 = 12863806959134232169ULL;
signed char var_4 = (signed char)107;
short var_5 = (short)-15508;
signed char var_12 = (signed char)81;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1521710568U;
signed char var_20 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
