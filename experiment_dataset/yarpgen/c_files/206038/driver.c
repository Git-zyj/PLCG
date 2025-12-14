#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
unsigned long long int var_1 = 7273347336408135897ULL;
unsigned short var_4 = (unsigned short)36609;
int var_7 = 1078160444;
short var_11 = (short)10450;
int zero = 0;
unsigned long long int var_13 = 5048861470118905353ULL;
short var_14 = (short)-7342;
unsigned char var_15 = (unsigned char)220;
signed char var_16 = (signed char)27;
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
