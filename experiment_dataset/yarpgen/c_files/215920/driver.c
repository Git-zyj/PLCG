#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = 1285697537292243193LL;
unsigned long long int var_5 = 10174593839965825312ULL;
int zero = 0;
short var_11 = (short)-181;
unsigned int var_12 = 2573127999U;
unsigned char var_13 = (unsigned char)86;
unsigned long long int var_14 = 12347473858533100687ULL;
signed char var_15 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
