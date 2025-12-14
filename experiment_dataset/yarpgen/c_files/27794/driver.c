#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5524941862353023967LL;
short var_5 = (short)8770;
unsigned char var_8 = (unsigned char)211;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)40991;
unsigned int var_15 = 105758636U;
int var_16 = -353353478;
unsigned int var_17 = 2235236169U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
