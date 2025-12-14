#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28746;
unsigned char var_10 = (unsigned char)244;
signed char var_11 = (signed char)-104;
signed char var_14 = (signed char)-91;
int zero = 0;
short var_17 = (short)-14164;
int var_18 = -465646476;
short var_19 = (short)24930;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
