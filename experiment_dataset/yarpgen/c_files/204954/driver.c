#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
int var_8 = -1920887093;
unsigned int var_15 = 3240638405U;
int zero = 0;
unsigned char var_18 = (unsigned char)152;
int var_19 = -1202521489;
signed char var_20 = (signed char)45;
unsigned short var_21 = (unsigned short)17170;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
