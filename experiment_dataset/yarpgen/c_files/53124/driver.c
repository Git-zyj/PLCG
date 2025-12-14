#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14776;
unsigned short var_3 = (unsigned short)26344;
long long int var_4 = -1178116675920494251LL;
short var_6 = (short)-18348;
unsigned short var_7 = (unsigned short)15038;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = -3279005796186057432LL;
short var_11 = (short)-8263;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
