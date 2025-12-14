#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8041;
short var_11 = (short)-31932;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = -2019111344755288732LL;
unsigned long long int var_20 = 4095563007768205051ULL;
short var_21 = (short)32419;
unsigned long long int var_22 = 17546672005210349125ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
