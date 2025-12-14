#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1537366094U;
long long int var_1 = 8249966602393338984LL;
int var_2 = 1583508978;
unsigned int var_3 = 2290786301U;
long long int var_4 = -5897074711437531052LL;
signed char var_7 = (signed char)26;
short var_8 = (short)-8386;
unsigned long long int var_12 = 4662905101796399137ULL;
short var_14 = (short)24922;
unsigned long long int var_15 = 16681432323993397276ULL;
int zero = 0;
unsigned int var_17 = 3560003440U;
long long int var_18 = 6393351178505875431LL;
short var_19 = (short)-934;
short var_20 = (short)19373;
int var_21 = -360755533;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
