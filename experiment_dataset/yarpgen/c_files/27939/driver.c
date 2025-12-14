#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24934;
int var_4 = -1068815075;
unsigned long long int var_6 = 13851737351677103332ULL;
unsigned int var_8 = 2019106166U;
unsigned long long int var_10 = 7339353274442054692ULL;
int zero = 0;
unsigned long long int var_11 = 8441317079328973232ULL;
short var_12 = (short)-3038;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
