#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8193443821736971690LL;
unsigned long long int var_10 = 9483399719000840182ULL;
_Bool var_12 = (_Bool)1;
long long int var_14 = 5973874122237765257LL;
int zero = 0;
long long int var_20 = -6373865252584851085LL;
unsigned short var_21 = (unsigned short)6888;
void init() {
}

void checksum() {
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
