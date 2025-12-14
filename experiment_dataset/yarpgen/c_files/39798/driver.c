#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
int var_3 = 948201537;
short var_6 = (short)-26219;
short var_11 = (short)-84;
signed char var_13 = (signed char)127;
int zero = 0;
signed char var_14 = (signed char)-19;
unsigned short var_15 = (unsigned short)25394;
void init() {
}

void checksum() {
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
