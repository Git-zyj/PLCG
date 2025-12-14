#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44810;
unsigned char var_5 = (unsigned char)216;
unsigned char var_6 = (unsigned char)173;
long long int var_7 = -8861226297196017569LL;
unsigned long long int var_9 = 12995702308101702414ULL;
long long int var_11 = -518725492083384987LL;
unsigned char var_12 = (unsigned char)240;
unsigned short var_13 = (unsigned short)1873;
unsigned char var_15 = (unsigned char)74;
unsigned long long int var_17 = 7524116702682477642ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)9;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 15213744996141102001ULL;
void init() {
}

void checksum() {
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
