#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-1025;
signed char var_3 = (signed char)-101;
unsigned char var_4 = (unsigned char)157;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)54111;
int var_7 = 1985686352;
long long int var_12 = -8292104851474291700LL;
short var_13 = (short)8302;
int zero = 0;
unsigned int var_14 = 435693705U;
int var_15 = -1377721910;
int var_16 = -260204189;
long long int var_17 = 4813597887430804335LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
