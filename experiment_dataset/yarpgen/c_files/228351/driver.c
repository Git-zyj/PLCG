#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
long long int var_5 = 8417085440425007641LL;
long long int var_7 = 5625334771089499316LL;
unsigned long long int var_8 = 5580676927697559807ULL;
short var_9 = (short)-18490;
long long int var_11 = 1470834637733198571LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13532769551808657512ULL;
long long int var_16 = 5714647229910260157LL;
long long int var_17 = -6172207701629057329LL;
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
