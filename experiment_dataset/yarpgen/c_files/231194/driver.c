#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7202;
int var_8 = 302482498;
short var_9 = (short)-6899;
unsigned short var_17 = (unsigned short)38094;
int zero = 0;
unsigned long long int var_18 = 9195226887397087556ULL;
unsigned short var_19 = (unsigned short)26925;
unsigned int var_20 = 3060266879U;
int var_21 = -834712118;
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
