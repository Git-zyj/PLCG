#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39899;
long long int var_2 = 1471057072047302872LL;
unsigned int var_4 = 2454807539U;
unsigned char var_9 = (unsigned char)92;
unsigned char var_10 = (unsigned char)63;
unsigned int var_13 = 2188638836U;
int zero = 0;
unsigned int var_17 = 2666782636U;
int var_18 = 597617723;
_Bool var_19 = (_Bool)1;
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
