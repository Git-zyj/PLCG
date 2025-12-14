#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
long long int var_3 = -975634959422508507LL;
long long int var_4 = -5633586786943513582LL;
short var_6 = (short)-19171;
long long int var_7 = -261022187261673490LL;
unsigned short var_8 = (unsigned short)16481;
unsigned short var_10 = (unsigned short)10194;
_Bool var_14 = (_Bool)1;
long long int var_15 = -7007860070370856492LL;
int zero = 0;
long long int var_16 = -5194643694184847193LL;
long long int var_17 = -7597260783198132481LL;
short var_18 = (short)22636;
long long int var_19 = -4675350052618265578LL;
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
