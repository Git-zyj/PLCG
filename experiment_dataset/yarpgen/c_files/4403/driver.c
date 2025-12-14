#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)136;
int var_3 = 1215407141;
short var_5 = (short)20797;
unsigned int var_7 = 445788652U;
short var_8 = (short)225;
signed char var_11 = (signed char)-104;
int zero = 0;
int var_12 = 594801652;
int var_13 = -1436678621;
int var_14 = 1625616801;
int var_15 = 502493484;
int var_16 = -328663515;
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
