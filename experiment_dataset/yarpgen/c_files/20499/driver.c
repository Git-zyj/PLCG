#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7833;
unsigned short var_1 = (unsigned short)13156;
unsigned long long int var_4 = 12504551991497929483ULL;
int var_5 = 2064973557;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4728138U;
unsigned int var_8 = 1689491656U;
int zero = 0;
unsigned short var_12 = (unsigned short)10969;
short var_13 = (short)10072;
int var_14 = -1790610827;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)19391;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
