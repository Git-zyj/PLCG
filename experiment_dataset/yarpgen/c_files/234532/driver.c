#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31078;
int var_2 = 1178455624;
int var_4 = -298760666;
short var_7 = (short)27897;
int var_8 = -924949252;
int zero = 0;
unsigned int var_11 = 3243995819U;
int var_12 = -313700787;
unsigned short var_13 = (unsigned short)48951;
short var_14 = (short)-12909;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
