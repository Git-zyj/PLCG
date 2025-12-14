#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3514511623U;
unsigned long long int var_3 = 2300823388871444826ULL;
int var_5 = -1622627131;
_Bool var_6 = (_Bool)1;
int var_8 = -1106036250;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)15;
short var_14 = (short)8897;
int var_15 = -754522978;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
