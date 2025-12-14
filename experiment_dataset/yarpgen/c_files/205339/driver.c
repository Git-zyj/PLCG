#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
unsigned char var_4 = (unsigned char)124;
int var_5 = 1458910253;
int var_7 = 468732832;
int zero = 0;
unsigned int var_12 = 1126707336U;
long long int var_13 = -5147649433868903476LL;
unsigned int var_14 = 3811041107U;
unsigned long long int var_15 = 11298713851755105238ULL;
int var_16 = -1006984478;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
