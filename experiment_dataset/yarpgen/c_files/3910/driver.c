#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3756189500066404663ULL;
unsigned int var_5 = 3221351588U;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)23102;
unsigned short var_11 = (unsigned short)17425;
int var_12 = -1023009620;
int zero = 0;
unsigned long long int var_14 = 8246808951554451072ULL;
long long int var_15 = 5746375829511039252LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
