#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 14996755979767684728ULL;
unsigned long long int var_7 = 65141265678518016ULL;
unsigned short var_8 = (unsigned short)1037;
unsigned long long int var_9 = 10199966779594521614ULL;
int var_15 = -1072305822;
int zero = 0;
long long int var_17 = 8020141120378293042LL;
int var_18 = 1499869759;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
