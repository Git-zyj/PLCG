#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_6 = (short)-18868;
int var_8 = -880731315;
signed char var_9 = (signed char)23;
unsigned char var_11 = (unsigned char)91;
unsigned long long int var_13 = 14513498996856422250ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)33;
long long int var_18 = 1539058946318750935LL;
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
