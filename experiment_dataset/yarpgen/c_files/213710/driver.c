#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
long long int var_2 = -497545964191477465LL;
unsigned short var_4 = (unsigned short)19802;
signed char var_5 = (signed char)125;
unsigned int var_7 = 3295829667U;
unsigned int var_9 = 3822722646U;
int var_13 = -717011740;
signed char var_14 = (signed char)126;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 795467540U;
unsigned short var_17 = (unsigned short)25196;
unsigned short var_18 = (unsigned short)46751;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
