#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2173670770999605480ULL;
int var_4 = -1331371326;
long long int var_5 = 5246865468814637478LL;
unsigned char var_8 = (unsigned char)13;
unsigned long long int var_10 = 17821104873358538228ULL;
unsigned char var_14 = (unsigned char)132;
_Bool var_15 = (_Bool)0;
int var_16 = -1682052002;
int zero = 0;
long long int var_17 = 7417265718518149101LL;
int var_18 = 67980236;
_Bool var_19 = (_Bool)1;
long long int var_20 = 801455190495424538LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
