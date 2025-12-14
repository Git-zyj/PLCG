#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7842077720978668779ULL;
unsigned short var_11 = (unsigned short)18980;
unsigned short var_13 = (unsigned short)48732;
unsigned long long int var_14 = 8891682200025646523ULL;
int zero = 0;
int var_17 = 1502877448;
short var_18 = (short)638;
long long int var_19 = -8702689521025620176LL;
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
