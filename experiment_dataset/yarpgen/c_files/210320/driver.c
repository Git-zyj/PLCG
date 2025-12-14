#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43301;
unsigned short var_1 = (unsigned short)8660;
unsigned short var_2 = (unsigned short)41741;
short var_3 = (short)11831;
unsigned int var_4 = 2026765431U;
short var_8 = (short)28625;
short var_13 = (short)4530;
int zero = 0;
unsigned char var_17 = (unsigned char)15;
short var_18 = (short)13424;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
