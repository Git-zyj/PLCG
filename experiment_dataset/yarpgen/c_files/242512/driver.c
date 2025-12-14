#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8807504532782540274ULL;
long long int var_5 = 2558641864135229295LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1048580767;
_Bool var_14 = (_Bool)0;
short var_15 = (short)22628;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
