#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19495;
int var_5 = 378720869;
signed char var_7 = (signed char)-18;
signed char var_8 = (signed char)-80;
unsigned long long int var_12 = 2111872814635135307ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)428;
short var_15 = (short)17191;
unsigned short var_16 = (unsigned short)26397;
int var_17 = 1423378537;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
