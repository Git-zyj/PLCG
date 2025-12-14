#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-3;
short var_13 = (short)-11728;
unsigned char var_14 = (unsigned char)160;
int zero = 0;
unsigned long long int var_15 = 18056803737247785322ULL;
signed char var_16 = (signed char)83;
short var_17 = (short)-9554;
unsigned int var_18 = 1874542605U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
