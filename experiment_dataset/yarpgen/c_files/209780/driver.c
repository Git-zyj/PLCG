#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)14399;
signed char var_10 = (signed char)-91;
unsigned long long int var_12 = 415286903920243530ULL;
unsigned long long int var_14 = 8124702828709210264ULL;
unsigned short var_15 = (unsigned short)64197;
int zero = 0;
unsigned short var_17 = (unsigned short)58671;
int var_18 = 2010520080;
int var_19 = -890032874;
signed char var_20 = (signed char)37;
short var_21 = (short)-25727;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
