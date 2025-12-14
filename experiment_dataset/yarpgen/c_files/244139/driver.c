#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -493730661777204324LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)15801;
unsigned long long int var_5 = 14683793305885359582ULL;
unsigned short var_8 = (unsigned short)45720;
int zero = 0;
unsigned long long int var_14 = 8066063149931125778ULL;
long long int var_15 = -775470386893644667LL;
unsigned long long int var_16 = 8179000481538156240ULL;
unsigned long long int var_17 = 11760427020723627692ULL;
unsigned char var_18 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
