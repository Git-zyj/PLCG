#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8857288613237905020ULL;
unsigned short var_9 = (unsigned short)17964;
unsigned short var_15 = (unsigned short)56933;
unsigned short var_16 = (unsigned short)20942;
short var_17 = (short)9068;
int zero = 0;
unsigned char var_20 = (unsigned char)137;
short var_21 = (short)28613;
unsigned short var_22 = (unsigned short)64471;
short var_23 = (short)17709;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
