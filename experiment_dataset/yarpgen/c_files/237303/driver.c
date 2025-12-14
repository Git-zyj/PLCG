#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1089037331U;
short var_9 = (short)7822;
int var_13 = 2019003863;
unsigned int var_16 = 4159249709U;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 4946388946699355644LL;
unsigned char var_21 = (unsigned char)170;
long long int var_22 = -4747470720373375115LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
