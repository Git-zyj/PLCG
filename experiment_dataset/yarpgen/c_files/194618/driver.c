#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5788;
short var_4 = (short)-5687;
long long int var_8 = 6124096516994631600LL;
int var_10 = -2088031619;
int zero = 0;
unsigned char var_11 = (unsigned char)170;
long long int var_12 = 5524644610610270627LL;
long long int var_13 = -6296845102262311179LL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)16825;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
