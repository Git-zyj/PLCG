#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 435856583U;
int var_2 = -1302213723;
unsigned short var_4 = (unsigned short)49197;
unsigned short var_7 = (unsigned short)29283;
unsigned int var_11 = 4213135533U;
int var_15 = -1942986213;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5148449832763747402LL;
long long int var_18 = -3988153854464732920LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
