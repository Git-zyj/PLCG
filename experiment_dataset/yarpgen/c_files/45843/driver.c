#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1868031866382495817ULL;
unsigned int var_2 = 2373098977U;
signed char var_4 = (signed char)18;
unsigned short var_7 = (unsigned short)8772;
signed char var_8 = (signed char)-86;
unsigned int var_9 = 91286766U;
unsigned short var_11 = (unsigned short)47339;
unsigned long long int var_13 = 5043380458031702659ULL;
int zero = 0;
unsigned int var_14 = 2896554653U;
unsigned long long int var_15 = 3565952404145353460ULL;
unsigned int var_16 = 1506246652U;
signed char var_17 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
