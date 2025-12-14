#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-96;
unsigned short var_7 = (unsigned short)4923;
signed char var_12 = (signed char)-107;
signed char var_14 = (signed char)-75;
int zero = 0;
unsigned char var_18 = (unsigned char)155;
signed char var_19 = (signed char)45;
short var_20 = (short)-24644;
void init() {
}

void checksum() {
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
