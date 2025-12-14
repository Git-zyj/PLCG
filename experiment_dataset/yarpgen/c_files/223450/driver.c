#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)62;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-26124;
long long int var_9 = 1420882179369046714LL;
int zero = 0;
short var_20 = (short)7919;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 4644171978813189679ULL;
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
