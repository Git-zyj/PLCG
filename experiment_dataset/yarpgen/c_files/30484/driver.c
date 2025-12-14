#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9676185279025927955ULL;
long long int var_1 = 3435155506846791415LL;
_Bool var_3 = (_Bool)1;
int var_4 = 969633788;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)92;
int var_13 = 1226258442;
int var_16 = 935829065;
unsigned short var_18 = (unsigned short)1675;
int zero = 0;
signed char var_20 = (signed char)-53;
unsigned short var_21 = (unsigned short)52198;
unsigned long long int var_22 = 4202182450753742695ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
