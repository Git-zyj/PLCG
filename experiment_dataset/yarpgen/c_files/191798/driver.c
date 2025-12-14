#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)22330;
signed char var_8 = (signed char)119;
unsigned int var_9 = 1505912886U;
int var_10 = 1945244868;
int zero = 0;
signed char var_11 = (signed char)16;
short var_12 = (short)20306;
unsigned long long int var_13 = 2343823025958618186ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
