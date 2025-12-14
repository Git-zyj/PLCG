#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3504;
long long int var_3 = -8981771287740836412LL;
short var_7 = (short)-7170;
unsigned short var_8 = (unsigned short)19941;
unsigned int var_11 = 556118322U;
short var_16 = (short)29614;
int zero = 0;
short var_18 = (short)9893;
int var_19 = 1736620000;
unsigned int var_20 = 3597130176U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
