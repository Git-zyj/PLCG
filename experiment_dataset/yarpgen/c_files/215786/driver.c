#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1612970845U;
unsigned long long int var_1 = 10451654274476404939ULL;
_Bool var_3 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)23788;
short var_11 = (short)-161;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
