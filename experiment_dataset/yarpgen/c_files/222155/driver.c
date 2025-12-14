#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29492;
signed char var_1 = (signed char)4;
short var_2 = (short)-17790;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 1304536114;
short var_13 = (short)-25291;
signed char var_14 = (signed char)112;
unsigned short var_15 = (unsigned short)28255;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
