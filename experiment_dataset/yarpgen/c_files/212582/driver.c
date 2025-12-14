#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
short var_8 = (short)-11696;
unsigned long long int var_11 = 2702360393176792054ULL;
unsigned short var_12 = (unsigned short)63852;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 6884501591315806969LL;
void init() {
}

void checksum() {
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
