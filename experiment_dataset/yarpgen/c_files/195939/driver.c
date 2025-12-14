#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)23;
unsigned long long int var_2 = 7265992394187573624ULL;
unsigned int var_11 = 735461383U;
long long int var_17 = 1936484581896919368LL;
int zero = 0;
long long int var_18 = -8835764908258784154LL;
long long int var_19 = 6260911571191287378LL;
_Bool var_20 = (_Bool)0;
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
