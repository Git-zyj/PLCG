#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)214;
signed char var_7 = (signed char)-54;
unsigned long long int var_11 = 7489448409391948500ULL;
signed char var_18 = (signed char)84;
int zero = 0;
short var_20 = (short)-4489;
unsigned int var_21 = 2064073757U;
unsigned long long int var_22 = 9265482403479070474ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
