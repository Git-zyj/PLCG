#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4456362316732878407LL;
int var_3 = -1627204105;
long long int var_7 = 3192966067610753427LL;
int var_9 = -1551379431;
long long int var_10 = -5381745262539379867LL;
unsigned long long int var_11 = 3612727811500409388ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)27059;
short var_15 = (short)-2481;
long long int var_16 = -3863648407194852158LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
