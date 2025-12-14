#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3400535734U;
signed char var_2 = (signed char)-38;
short var_3 = (short)23021;
_Bool var_5 = (_Bool)0;
int var_6 = -1076262746;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)99;
unsigned long long int var_14 = 4369069471140156880ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)186;
signed char var_19 = (signed char)-84;
void init() {
}

void checksum() {
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
