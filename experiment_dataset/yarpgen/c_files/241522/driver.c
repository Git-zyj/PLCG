#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)87;
signed char var_9 = (signed char)-56;
unsigned short var_14 = (unsigned short)16011;
unsigned long long int var_15 = 6784199862268152063ULL;
long long int var_17 = -7350234168352719403LL;
int zero = 0;
unsigned long long int var_20 = 17848219889209141110ULL;
unsigned long long int var_21 = 14745843647305233683ULL;
unsigned short var_22 = (unsigned short)19014;
long long int var_23 = -8397087323517077722LL;
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
