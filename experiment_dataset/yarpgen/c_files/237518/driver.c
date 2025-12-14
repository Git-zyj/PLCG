#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -764502902;
long long int var_4 = 3874467512381826237LL;
unsigned char var_6 = (unsigned char)27;
long long int var_8 = -7099843105312314065LL;
int zero = 0;
unsigned long long int var_10 = 2012046661234738979ULL;
int var_11 = 1020327316;
unsigned char var_12 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
