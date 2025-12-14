#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
short var_7 = (short)11442;
int var_9 = 2140337237;
unsigned char var_10 = (unsigned char)50;
long long int var_11 = 3866408791875007452LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5288136987905950109LL;
short var_15 = (short)27191;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
