#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8843834013477998880ULL;
signed char var_3 = (signed char)103;
signed char var_5 = (signed char)-99;
unsigned short var_6 = (unsigned short)22216;
short var_7 = (short)6927;
int zero = 0;
unsigned int var_10 = 2024914139U;
signed char var_11 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
