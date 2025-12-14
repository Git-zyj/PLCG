#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)90;
unsigned char var_3 = (unsigned char)27;
unsigned long long int var_5 = 6273627110549219107ULL;
unsigned int var_10 = 3901555378U;
unsigned int var_11 = 3750036169U;
signed char var_16 = (signed char)61;
unsigned char var_17 = (unsigned char)79;
unsigned int var_18 = 4146461315U;
int zero = 0;
unsigned int var_20 = 1961849663U;
int var_21 = -283441990;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
