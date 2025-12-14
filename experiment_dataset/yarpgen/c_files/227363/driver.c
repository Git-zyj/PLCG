#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
unsigned short var_5 = (unsigned short)8893;
int var_10 = 154337899;
unsigned long long int var_13 = 18444102739789145585ULL;
long long int var_15 = -8619260125157098520LL;
int zero = 0;
unsigned long long int var_17 = 5422200154879737062ULL;
unsigned long long int var_18 = 2923733246437775627ULL;
long long int var_19 = 6691996113337937387LL;
short var_20 = (short)-12051;
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
