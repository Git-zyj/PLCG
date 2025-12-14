#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 764566588U;
int var_4 = -516861061;
short var_7 = (short)-13664;
signed char var_9 = (signed char)49;
int var_12 = -174515882;
unsigned char var_13 = (unsigned char)83;
signed char var_15 = (signed char)8;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2702925492U;
int zero = 0;
unsigned long long int var_20 = 14364399455114908075ULL;
short var_21 = (short)-11680;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
