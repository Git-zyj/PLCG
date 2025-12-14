#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1617376728U;
int var_3 = -2115794452;
unsigned long long int var_5 = 15592547715879413068ULL;
unsigned int var_7 = 4122707715U;
long long int var_9 = 7937057188278856701LL;
short var_11 = (short)-20023;
long long int var_13 = 2181345663579174234LL;
int var_16 = -2140604536;
unsigned char var_17 = (unsigned char)97;
int zero = 0;
unsigned long long int var_20 = 4201581846768360425ULL;
int var_21 = 1901534124;
unsigned int var_22 = 822007477U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
