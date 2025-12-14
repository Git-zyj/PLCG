#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1899344820;
signed char var_1 = (signed char)80;
unsigned long long int var_4 = 10657537174672899436ULL;
unsigned char var_6 = (unsigned char)17;
unsigned short var_7 = (unsigned short)22045;
unsigned char var_10 = (unsigned char)253;
int zero = 0;
unsigned int var_12 = 3243733118U;
unsigned int var_13 = 1366165678U;
void init() {
}

void checksum() {
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
