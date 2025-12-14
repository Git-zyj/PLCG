#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
unsigned long long int var_1 = 16725438125866792520ULL;
unsigned short var_5 = (unsigned short)17097;
short var_7 = (short)-9737;
int var_8 = 1472084107;
signed char var_9 = (signed char)81;
unsigned int var_10 = 3271902569U;
short var_14 = (short)29531;
unsigned short var_19 = (unsigned short)21636;
int zero = 0;
unsigned char var_20 = (unsigned char)197;
short var_21 = (short)-3805;
short var_22 = (short)28401;
void init() {
}

void checksum() {
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
