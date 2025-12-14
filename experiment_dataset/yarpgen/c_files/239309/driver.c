#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44069;
unsigned char var_11 = (unsigned char)149;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 16278580124907110302ULL;
unsigned short var_16 = (unsigned short)15160;
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
