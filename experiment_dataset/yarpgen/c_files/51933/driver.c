#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)183;
long long int var_9 = 8660909087426842359LL;
short var_10 = (short)28009;
long long int var_11 = 5982263779015913644LL;
int zero = 0;
unsigned long long int var_13 = 6115035960073539329ULL;
int var_14 = -1595586389;
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
