#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27066;
short var_3 = (short)4166;
short var_5 = (short)-1558;
short var_9 = (short)27351;
int var_10 = 1258255069;
int var_11 = -1060795126;
unsigned char var_12 = (unsigned char)163;
short var_13 = (short)27172;
unsigned char var_14 = (unsigned char)23;
int zero = 0;
short var_16 = (short)20441;
short var_17 = (short)23505;
short var_18 = (short)-16189;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
