#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 145374010;
short var_8 = (short)-19360;
short var_9 = (short)6814;
short var_12 = (short)23141;
int zero = 0;
int var_19 = -359658574;
long long int var_20 = -1895744427731526687LL;
short var_21 = (short)-1626;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
