#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14585492603357881480ULL;
unsigned short var_4 = (unsigned short)25845;
short var_6 = (short)-25656;
short var_10 = (short)-511;
int zero = 0;
signed char var_19 = (signed char)77;
short var_20 = (short)-3270;
void init() {
}

void checksum() {
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
