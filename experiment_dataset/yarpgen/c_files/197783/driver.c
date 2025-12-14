#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 14721897303719306218ULL;
unsigned short var_10 = (unsigned short)62051;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -578959104756371913LL;
unsigned char var_13 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
