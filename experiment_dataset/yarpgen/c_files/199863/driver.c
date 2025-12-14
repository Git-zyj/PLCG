#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9334408989278708393ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)10975;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 5623625234772674866ULL;
int var_12 = 512885563;
unsigned long long int var_13 = 3663070729610209849ULL;
int var_14 = 1266672753;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
