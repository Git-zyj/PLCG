#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2073814042;
unsigned short var_2 = (unsigned short)30702;
unsigned char var_4 = (unsigned char)18;
unsigned char var_6 = (unsigned char)190;
unsigned short var_12 = (unsigned short)25415;
int zero = 0;
unsigned long long int var_13 = 14663871045361624207ULL;
short var_14 = (short)25573;
_Bool var_15 = (_Bool)0;
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
