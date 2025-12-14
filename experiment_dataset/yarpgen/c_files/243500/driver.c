#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5992146027809501537LL;
short var_6 = (short)17269;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = 635957369;
unsigned char var_14 = (unsigned char)162;
int var_15 = -1333562748;
int var_16 = -1213321545;
long long int var_17 = -4616046516774903754LL;
int zero = 0;
long long int var_18 = -6569223132509919037LL;
unsigned int var_19 = 3311551775U;
long long int var_20 = 9207226683500393374LL;
short var_21 = (short)-18760;
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
