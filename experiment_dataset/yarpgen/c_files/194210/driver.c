#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7334386275753643278ULL;
long long int var_2 = -6974086675787717228LL;
signed char var_3 = (signed char)6;
unsigned long long int var_4 = 8774494681624754988ULL;
long long int var_5 = 1600090197871909942LL;
unsigned long long int var_6 = 12389002910566599675ULL;
long long int var_13 = 1569235955508525711LL;
int zero = 0;
unsigned short var_16 = (unsigned short)5474;
unsigned int var_17 = 2679657466U;
unsigned long long int var_18 = 9393663883873433211ULL;
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
