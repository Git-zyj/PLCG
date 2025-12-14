#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_5 = (short)2971;
unsigned long long int var_6 = 1952353084871390419ULL;
long long int var_7 = 6413086791495256446LL;
unsigned short var_10 = (unsigned short)23978;
long long int var_11 = -4600936748428008097LL;
int zero = 0;
short var_18 = (short)-11895;
unsigned char var_19 = (unsigned char)235;
unsigned char var_20 = (unsigned char)184;
short var_21 = (short)16796;
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
