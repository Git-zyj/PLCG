#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = -9255943248931146LL;
int var_7 = -1733000208;
unsigned short var_8 = (unsigned short)10224;
int var_9 = -291363005;
int zero = 0;
int var_12 = -549688319;
unsigned long long int var_13 = 11168067694619213757ULL;
unsigned long long int var_14 = 12472874308089884951ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
