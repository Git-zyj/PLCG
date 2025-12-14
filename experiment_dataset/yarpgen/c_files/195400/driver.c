#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1646191841;
int var_2 = 418146049;
signed char var_4 = (signed char)41;
unsigned int var_8 = 1103594385U;
int zero = 0;
short var_13 = (short)-5659;
int var_14 = -725220866;
short var_15 = (short)-1268;
unsigned short var_16 = (unsigned short)23062;
unsigned long long int var_17 = 1556847325494771046ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
