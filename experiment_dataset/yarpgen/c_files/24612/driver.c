#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7452275695115359876LL;
int var_2 = -2142386099;
unsigned long long int var_3 = 13061407637198334342ULL;
short var_4 = (short)-8933;
signed char var_6 = (signed char)122;
unsigned char var_8 = (unsigned char)9;
unsigned char var_9 = (unsigned char)15;
int zero = 0;
int var_11 = 1729443960;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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
