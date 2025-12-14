#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 9802322193236053191ULL;
int var_11 = 1086296341;
long long int var_16 = -4004821499224975197LL;
int zero = 0;
long long int var_17 = 6600458597738249135LL;
unsigned short var_18 = (unsigned short)9612;
short var_19 = (short)16560;
void init() {
}

void checksum() {
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
