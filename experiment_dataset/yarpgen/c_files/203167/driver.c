#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_6 = (unsigned char)71;
signed char var_13 = (signed char)-89;
unsigned short var_15 = (unsigned short)4274;
int zero = 0;
unsigned long long int var_17 = 16743171413567269001ULL;
short var_18 = (short)15837;
unsigned int var_19 = 1397337307U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
