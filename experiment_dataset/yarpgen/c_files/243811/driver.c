#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1054190016U;
short var_2 = (short)-6092;
unsigned short var_7 = (unsigned short)51344;
int var_8 = -1175331255;
int var_9 = 1160527984;
unsigned long long int var_11 = 11694546462715728558ULL;
signed char var_12 = (signed char)31;
unsigned char var_15 = (unsigned char)24;
signed char var_17 = (signed char)63;
short var_18 = (short)12947;
int zero = 0;
unsigned int var_19 = 2849517553U;
int var_20 = 203870717;
unsigned char var_21 = (unsigned char)63;
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
