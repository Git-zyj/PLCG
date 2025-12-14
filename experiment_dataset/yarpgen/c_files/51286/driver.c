#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6630202091013500133LL;
long long int var_2 = 300934732433855059LL;
unsigned char var_3 = (unsigned char)229;
unsigned long long int var_12 = 13526646615703176685ULL;
unsigned char var_16 = (unsigned char)250;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-64;
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
