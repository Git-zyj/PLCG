#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1008373629;
int var_6 = -1265471190;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)26;
int zero = 0;
short var_15 = (short)-19997;
int var_16 = -1288718914;
void init() {
}

void checksum() {
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
