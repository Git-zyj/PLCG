#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)15821;
unsigned int var_8 = 2395060052U;
unsigned long long int var_11 = 8732366735489951386ULL;
int var_12 = 319999380;
unsigned char var_13 = (unsigned char)126;
signed char var_14 = (signed char)-93;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -1137310533;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1541055359U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
