#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23983;
_Bool var_7 = (_Bool)1;
long long int var_11 = 336732644416102481LL;
int zero = 0;
int var_13 = 962845876;
unsigned char var_14 = (unsigned char)123;
long long int var_15 = 6574044233272798772LL;
long long int var_16 = -8682888434222110743LL;
void init() {
}

void checksum() {
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
