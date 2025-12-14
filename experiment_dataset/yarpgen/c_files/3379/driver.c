#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 238346875;
short var_5 = (short)-7107;
signed char var_8 = (signed char)44;
int var_10 = -1171045641;
unsigned long long int var_11 = 15568619108429210793ULL;
int zero = 0;
unsigned long long int var_12 = 9917898983186267388ULL;
short var_13 = (short)-3778;
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
