#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2948743606U;
short var_2 = (short)2822;
int var_5 = -1661807293;
short var_7 = (short)-19042;
int var_10 = 1586104215;
unsigned char var_12 = (unsigned char)140;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 8818869740382252761ULL;
unsigned long long int var_15 = 2906387570229097932ULL;
int zero = 0;
long long int var_17 = -1617504367216704884LL;
short var_18 = (short)13612;
void init() {
}

void checksum() {
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
