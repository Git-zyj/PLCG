#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 191219582U;
unsigned int var_8 = 1067813763U;
signed char var_15 = (signed char)-4;
int zero = 0;
unsigned short var_19 = (unsigned short)42915;
unsigned char var_20 = (unsigned char)207;
unsigned int var_21 = 3206657006U;
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
