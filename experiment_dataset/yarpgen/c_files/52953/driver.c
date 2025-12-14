#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 14551357024452367170ULL;
unsigned long long int var_4 = 8200130016295524698ULL;
long long int var_8 = 5804747904783757788LL;
signed char var_11 = (signed char)-44;
unsigned int var_14 = 660084070U;
unsigned int var_16 = 220333113U;
long long int var_17 = -4897825877879494505LL;
int zero = 0;
int var_20 = -409833408;
int var_21 = -1558723049;
long long int var_22 = -4664646359134307489LL;
int var_23 = 361762933;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
