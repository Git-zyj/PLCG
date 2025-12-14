#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_6 = -4917701105766196405LL;
long long int var_8 = -6114762046860936845LL;
unsigned short var_9 = (unsigned short)3854;
int zero = 0;
unsigned short var_11 = (unsigned short)8898;
int var_12 = 313901000;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
