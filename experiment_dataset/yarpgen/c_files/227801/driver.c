#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16961336914795556104ULL;
unsigned short var_6 = (unsigned short)16149;
int zero = 0;
unsigned short var_16 = (unsigned short)55906;
unsigned long long int var_17 = 1485958727712812345ULL;
signed char var_18 = (signed char)60;
unsigned int var_19 = 1996694651U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
