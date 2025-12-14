#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30818;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)51489;
short var_5 = (short)21991;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)46924;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_15 = (short)-26991;
unsigned short var_16 = (unsigned short)30790;
short var_17 = (short)-28727;
unsigned short var_18 = (unsigned short)28161;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
