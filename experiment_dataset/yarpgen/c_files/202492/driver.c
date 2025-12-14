#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
unsigned int var_2 = 2860961740U;
short var_3 = (short)-15819;
short var_6 = (short)19512;
int var_7 = 1774342125;
unsigned int var_8 = 227939344U;
signed char var_9 = (signed char)119;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 3238882534421947733LL;
unsigned long long int var_16 = 14258822688256736147ULL;
long long int var_17 = 3609304613323563226LL;
short var_18 = (short)-22649;
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
