#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26194;
signed char var_3 = (signed char)3;
long long int var_7 = 6683452776356101162LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = 6810254842665419537LL;
unsigned short var_15 = (unsigned short)17004;
unsigned short var_16 = (unsigned short)43142;
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
