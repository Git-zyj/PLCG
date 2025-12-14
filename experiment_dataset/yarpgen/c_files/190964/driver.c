#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23826;
short var_3 = (short)-15034;
long long int var_9 = -5484510267566153638LL;
short var_11 = (short)-8384;
int zero = 0;
int var_13 = 1343382340;
unsigned char var_14 = (unsigned char)67;
unsigned char var_15 = (unsigned char)151;
short var_16 = (short)-31701;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
