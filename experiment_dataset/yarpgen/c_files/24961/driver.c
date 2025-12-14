#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3945358317863482810LL;
long long int var_8 = 1191976410711456386LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)28181;
short var_13 = (short)25804;
short var_14 = (short)-19055;
short var_15 = (short)23710;
unsigned char var_16 = (unsigned char)88;
unsigned short arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)49934;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
