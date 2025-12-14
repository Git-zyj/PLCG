#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5120128459129739815ULL;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-21451;
int var_10 = 112346631;
unsigned long long int var_13 = 4881656005074473014ULL;
int var_15 = -427569277;
int var_16 = 1009997110;
int var_19 = -557899284;
int zero = 0;
long long int var_20 = -5527228392487835374LL;
unsigned short var_21 = (unsigned short)1589;
int var_22 = 308738773;
short var_23 = (short)-11183;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
