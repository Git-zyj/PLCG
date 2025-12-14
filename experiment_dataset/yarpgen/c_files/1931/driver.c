#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 706534507;
unsigned char var_3 = (unsigned char)38;
unsigned short var_6 = (unsigned short)21876;
short var_7 = (short)-13251;
short var_15 = (short)13315;
int zero = 0;
int var_17 = 2146349822;
unsigned long long int var_18 = 9010332498349996431ULL;
signed char var_19 = (signed char)-46;
void init() {
}

void checksum() {
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
