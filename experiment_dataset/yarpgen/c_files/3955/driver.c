#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17946;
unsigned int var_6 = 559078349U;
_Bool var_8 = (_Bool)1;
int var_9 = 390350150;
int var_11 = -945098615;
unsigned int var_12 = 1429285924U;
short var_14 = (short)-7331;
int var_15 = 1963631278;
int zero = 0;
int var_17 = 391274437;
unsigned int var_18 = 1177031120U;
unsigned int var_19 = 3400656052U;
short var_20 = (short)-18212;
unsigned char var_21 = (unsigned char)237;
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
