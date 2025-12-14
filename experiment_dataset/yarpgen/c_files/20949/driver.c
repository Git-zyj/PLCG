#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1207753158U;
int var_3 = 1491351718;
signed char var_4 = (signed char)-19;
unsigned int var_6 = 2433042933U;
signed char var_10 = (signed char)-109;
short var_11 = (short)15138;
signed char var_16 = (signed char)2;
unsigned long long int var_18 = 8758544347504309231ULL;
int zero = 0;
short var_20 = (short)17055;
unsigned char var_21 = (unsigned char)71;
unsigned long long int var_22 = 13624119804640046049ULL;
signed char var_23 = (signed char)46;
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
