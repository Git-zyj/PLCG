#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51190;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-17202;
int zero = 0;
long long int var_17 = 8833211513041807143LL;
unsigned short var_18 = (unsigned short)8447;
short var_19 = (short)-16443;
void init() {
}

void checksum() {
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
