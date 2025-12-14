#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
long long int var_1 = 4298462914439240927LL;
unsigned short var_4 = (unsigned short)19909;
unsigned char var_8 = (unsigned char)82;
signed char var_13 = (signed char)-48;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17707535613929773302ULL;
unsigned char var_16 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
