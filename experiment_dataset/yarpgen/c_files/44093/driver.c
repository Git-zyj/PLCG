#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6439177799958370881LL;
unsigned char var_3 = (unsigned char)43;
long long int var_5 = -9054261275833567159LL;
int var_12 = -1127928904;
unsigned int var_13 = 2992050656U;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -317835311;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
