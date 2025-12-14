#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33857;
unsigned long long int var_4 = 12269360376353630005ULL;
short var_6 = (short)-12553;
unsigned long long int var_9 = 6902388657315662935ULL;
unsigned long long int var_14 = 8919387867016854354ULL;
unsigned long long int var_16 = 12712202260262319029ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 9138845891613241756LL;
void init() {
}

void checksum() {
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
