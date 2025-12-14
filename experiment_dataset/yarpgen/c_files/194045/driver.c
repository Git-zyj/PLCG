#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5800;
unsigned long long int var_2 = 12270390354130675188ULL;
unsigned short var_9 = (unsigned short)45427;
unsigned short var_10 = (unsigned short)45493;
int zero = 0;
short var_11 = (short)19444;
unsigned long long int var_12 = 9510974213537544670ULL;
short var_13 = (short)19936;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
