#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -163377496524510550LL;
unsigned short var_3 = (unsigned short)36186;
long long int var_4 = -7735340053842800516LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)178;
unsigned char var_16 = (unsigned char)157;
unsigned short var_17 = (unsigned short)19951;
long long int var_18 = -7896115253036295991LL;
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
