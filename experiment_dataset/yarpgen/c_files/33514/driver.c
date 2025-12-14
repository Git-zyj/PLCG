#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1285882901;
int var_4 = -1521348334;
unsigned char var_14 = (unsigned char)246;
long long int var_15 = 6445755260615325601LL;
short var_16 = (short)-7349;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 130629986;
void init() {
}

void checksum() {
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
