#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -715202597;
int var_4 = 118152508;
short var_7 = (short)24605;
long long int var_9 = 2861564777867028193LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 7992730576113636119ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)174;
long long int var_13 = -1302844692977705479LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
