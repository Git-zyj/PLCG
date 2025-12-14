#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)157;
unsigned char var_15 = (unsigned char)168;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)50253;
int var_18 = -1885836682;
int var_19 = -1550963875;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
