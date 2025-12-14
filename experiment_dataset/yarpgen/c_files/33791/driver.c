#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25076;
short var_5 = (short)-28473;
short var_6 = (short)-26535;
short var_8 = (short)20465;
short var_11 = (short)-2405;
int zero = 0;
int var_12 = -1758448066;
unsigned char var_13 = (unsigned char)68;
unsigned int var_14 = 339037763U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
