#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11520627381204154709ULL;
short var_2 = (short)-30448;
_Bool var_3 = (_Bool)1;
long long int var_4 = 9165672928753930060LL;
unsigned int var_5 = 202614508U;
_Bool var_6 = (_Bool)0;
long long int var_7 = -8489268024531389558LL;
unsigned int var_8 = 14074814U;
unsigned int var_9 = 1204752988U;
int zero = 0;
long long int var_10 = 6560786080306389855LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4144481590U;
short var_13 = (short)22372;
unsigned char var_14 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
