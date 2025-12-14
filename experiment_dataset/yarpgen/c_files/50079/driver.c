#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 14276928161481778917ULL;
unsigned short var_9 = (unsigned short)12030;
int var_12 = 192211542;
long long int var_14 = 1196016103382548713LL;
int var_15 = -285972171;
signed char var_16 = (signed char)9;
int zero = 0;
unsigned long long int var_17 = 15787041790440471753ULL;
signed char var_18 = (signed char)-2;
int var_19 = -1348029855;
unsigned char var_20 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
