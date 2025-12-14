#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)60197;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 11894182587026657613ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = 5151266375602505207LL;
long long int var_16 = -7246507177613071726LL;
void init() {
}

void checksum() {
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
