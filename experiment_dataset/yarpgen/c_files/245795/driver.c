#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2126786146;
int var_2 = 1910044586;
signed char var_5 = (signed char)-119;
short var_9 = (short)-30025;
int zero = 0;
short var_10 = (short)10458;
int var_11 = 658493081;
unsigned char var_12 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
