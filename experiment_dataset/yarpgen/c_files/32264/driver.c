#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -6157597786874250885LL;
unsigned char var_6 = (unsigned char)23;
short var_7 = (short)-20111;
unsigned char var_9 = (unsigned char)138;
long long int var_10 = -2849574994516885650LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 11306208229935592503ULL;
short var_13 = (short)-12117;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
