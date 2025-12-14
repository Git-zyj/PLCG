#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5841831820912795396LL;
unsigned int var_17 = 236109796U;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -707584443044480300LL;
short var_22 = (short)-15389;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
