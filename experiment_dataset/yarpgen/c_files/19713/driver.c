#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 9472351169105618363ULL;
unsigned short var_6 = (unsigned short)16025;
unsigned long long int var_9 = 6709961633212224077ULL;
int zero = 0;
long long int var_10 = -189426356496491946LL;
unsigned char var_11 = (unsigned char)230;
unsigned long long int var_12 = 5474524214055505955ULL;
int var_13 = -1519860569;
unsigned char var_14 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
