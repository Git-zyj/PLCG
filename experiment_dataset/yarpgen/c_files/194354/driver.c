#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-107;
signed char var_5 = (signed char)-85;
signed char var_7 = (signed char)100;
int var_8 = 324347854;
int var_9 = 319003509;
short var_12 = (short)-4346;
int zero = 0;
signed char var_15 = (signed char)127;
long long int var_16 = -8716345196516128644LL;
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
