#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1343961079U;
unsigned long long int var_1 = 16012142145867891695ULL;
unsigned long long int var_13 = 6309043397493759827ULL;
unsigned short var_16 = (unsigned short)1654;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 17853068964582162468ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
