#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1733875830;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = -1901249845673823526LL;
unsigned long long int var_17 = 15526906825603448333ULL;
unsigned char var_18 = (unsigned char)179;
short var_19 = (short)-27093;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
