#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 591327689;
unsigned short var_4 = (unsigned short)1556;
unsigned short var_5 = (unsigned short)756;
unsigned short var_6 = (unsigned short)594;
unsigned long long int var_7 = 9467836067153352696ULL;
unsigned long long int var_10 = 4236948012750053984ULL;
unsigned int var_12 = 3104157924U;
int var_15 = 1384418662;
unsigned int var_16 = 1523587675U;
int zero = 0;
unsigned int var_17 = 2413556607U;
unsigned char var_18 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
