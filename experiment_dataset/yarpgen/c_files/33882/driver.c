#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
int var_2 = -1126987049;
long long int var_10 = 100468297323941132LL;
unsigned short var_11 = (unsigned short)64177;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)63;
unsigned char var_17 = (unsigned char)134;
long long int var_18 = 7632394156554619527LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)24478;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
