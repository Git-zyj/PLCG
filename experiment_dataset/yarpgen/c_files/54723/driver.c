#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -213581626;
unsigned int var_4 = 2682761181U;
unsigned long long int var_5 = 5302414880233531316ULL;
long long int var_6 = -3332630302905802765LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 18382027790711572113ULL;
int var_15 = -1175862713;
void init() {
}

void checksum() {
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
