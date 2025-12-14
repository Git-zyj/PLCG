#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7063374744431013822ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)36945;
int var_10 = -401174034;
long long int var_11 = -8979177375754716666LL;
unsigned long long int var_12 = 5094773258194566781ULL;
int var_13 = -1167673795;
short var_14 = (short)-3140;
int var_15 = -1152880710;
int zero = 0;
unsigned char var_16 = (unsigned char)43;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-25079;
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
