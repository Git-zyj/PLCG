#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18970;
unsigned char var_3 = (unsigned char)245;
unsigned char var_7 = (unsigned char)168;
short var_8 = (short)-10587;
int zero = 0;
unsigned long long int var_13 = 12181523625677829139ULL;
signed char var_14 = (signed char)-110;
int var_15 = 552207811;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
