#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1924129646;
unsigned int var_2 = 847408091U;
unsigned int var_4 = 2403530740U;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-121;
short var_8 = (short)-24173;
signed char var_11 = (signed char)125;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1772935853;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
