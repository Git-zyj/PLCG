#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)252;
unsigned char var_14 = (unsigned char)227;
signed char var_15 = (signed char)-43;
int zero = 0;
short var_19 = (short)-10665;
short var_20 = (short)19801;
unsigned char var_21 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
