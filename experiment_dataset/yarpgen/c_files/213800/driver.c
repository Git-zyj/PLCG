#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1014530386U;
_Bool var_2 = (_Bool)0;
long long int var_4 = -2187600738118447685LL;
long long int var_7 = -1177133641470644239LL;
unsigned short var_8 = (unsigned short)35882;
unsigned short var_10 = (unsigned short)1164;
int zero = 0;
signed char var_15 = (signed char)-2;
unsigned int var_16 = 1162082775U;
unsigned long long int var_17 = 7183854339630561480ULL;
void init() {
}

void checksum() {
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
