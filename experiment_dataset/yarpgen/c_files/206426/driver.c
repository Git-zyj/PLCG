#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_12 = (unsigned char)18;
unsigned char var_14 = (unsigned char)90;
unsigned long long int var_17 = 7917762373285780214ULL;
int zero = 0;
unsigned long long int var_18 = 3140918316401005355ULL;
short var_19 = (short)15771;
int var_20 = -1050199254;
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
