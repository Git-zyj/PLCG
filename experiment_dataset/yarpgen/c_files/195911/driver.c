#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20621;
int var_5 = -1112802792;
unsigned long long int var_6 = 6874617624977638214ULL;
long long int var_8 = -2898477033261165732LL;
unsigned long long int var_9 = 1150497873356889482ULL;
unsigned short var_10 = (unsigned short)2111;
int zero = 0;
long long int var_11 = 5538150553684224579LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -7958603486128442785LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
