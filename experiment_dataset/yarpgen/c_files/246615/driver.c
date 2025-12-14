#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
unsigned int var_3 = 1541385394U;
signed char var_4 = (signed char)30;
unsigned int var_6 = 3088961312U;
signed char var_10 = (signed char)115;
int var_13 = 613884381;
short var_15 = (short)21244;
int zero = 0;
unsigned int var_19 = 2780147745U;
unsigned long long int var_20 = 9947844440091385262ULL;
signed char var_21 = (signed char)123;
short var_22 = (short)-4997;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
