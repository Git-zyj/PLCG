#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
int var_1 = 2097514311;
int var_3 = -1396512688;
unsigned int var_6 = 553513597U;
unsigned short var_7 = (unsigned short)56856;
int zero = 0;
int var_10 = 746818624;
short var_11 = (short)28584;
unsigned long long int var_12 = 6513362791831540587ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
