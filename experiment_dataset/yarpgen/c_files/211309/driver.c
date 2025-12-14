#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -594391732669963637LL;
unsigned int var_15 = 81873242U;
unsigned int var_16 = 472138312U;
int zero = 0;
long long int var_18 = -9103762500453868047LL;
unsigned short var_19 = (unsigned short)27235;
void init() {
}

void checksum() {
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
