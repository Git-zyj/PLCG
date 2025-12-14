#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1544278260;
int var_7 = -384572063;
long long int var_8 = 6267022906356161933LL;
short var_9 = (short)10638;
int var_10 = -1744834584;
unsigned short var_11 = (unsigned short)8655;
int zero = 0;
short var_16 = (short)-18993;
unsigned long long int var_17 = 14887764712771428646ULL;
int var_18 = -1341151540;
short var_19 = (short)6026;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
