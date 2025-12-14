#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 302623513;
short var_5 = (short)-18272;
unsigned short var_7 = (unsigned short)48018;
int var_12 = -1514680331;
int zero = 0;
short var_17 = (short)-14868;
signed char var_18 = (signed char)-9;
unsigned int var_19 = 3478878238U;
signed char var_20 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
