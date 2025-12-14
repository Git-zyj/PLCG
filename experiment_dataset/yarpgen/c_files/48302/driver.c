#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
short var_1 = (short)-24436;
unsigned int var_5 = 1596132118U;
signed char var_9 = (signed char)42;
unsigned char var_11 = (unsigned char)156;
short var_12 = (short)-13449;
unsigned long long int var_13 = 1756915809571269760ULL;
int zero = 0;
short var_14 = (short)-14873;
short var_15 = (short)-6588;
short var_16 = (short)-19820;
void init() {
}

void checksum() {
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
