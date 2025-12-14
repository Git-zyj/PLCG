#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3907856022202264540LL;
signed char var_2 = (signed char)109;
long long int var_7 = -3731048161192566044LL;
unsigned long long int var_8 = 4603352094468624674ULL;
int var_10 = -238520651;
int var_12 = -1562650431;
unsigned char var_14 = (unsigned char)138;
long long int var_15 = -3056888255024200851LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1518867321;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
