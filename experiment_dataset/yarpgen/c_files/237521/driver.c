#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1289237993;
unsigned long long int var_11 = 16266370968098436863ULL;
signed char var_14 = (signed char)-90;
int zero = 0;
signed char var_15 = (signed char)-13;
unsigned short var_16 = (unsigned short)47870;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
