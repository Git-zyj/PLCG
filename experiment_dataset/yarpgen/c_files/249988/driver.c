#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5299660345655412451ULL;
unsigned short var_5 = (unsigned short)35625;
signed char var_8 = (signed char)52;
unsigned long long int var_12 = 9129513398287905375ULL;
int zero = 0;
unsigned long long int var_15 = 6302143717142261242ULL;
unsigned long long int var_16 = 12874494721854517489ULL;
signed char var_17 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
