#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31190;
signed char var_10 = (signed char)-58;
unsigned short var_11 = (unsigned short)21410;
int var_14 = 187739661;
signed char var_15 = (signed char)-44;
int zero = 0;
unsigned char var_19 = (unsigned char)122;
unsigned int var_20 = 2436281889U;
short var_21 = (short)4303;
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
