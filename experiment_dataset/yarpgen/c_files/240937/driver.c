#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-20;
int var_5 = -1320517340;
unsigned short var_7 = (unsigned short)52844;
_Bool var_8 = (_Bool)1;
int var_10 = 1324220999;
int zero = 0;
int var_13 = 650472263;
int var_14 = 1675066556;
signed char var_15 = (signed char)11;
void init() {
}

void checksum() {
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
