#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-86;
unsigned long long int var_10 = 11730806904043424615ULL;
unsigned long long int var_14 = 6575317432136742056ULL;
unsigned char var_15 = (unsigned char)48;
int var_17 = -591522314;
unsigned int var_18 = 636665734U;
int zero = 0;
unsigned int var_19 = 1989597113U;
int var_20 = -129086060;
signed char var_21 = (signed char)-100;
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
