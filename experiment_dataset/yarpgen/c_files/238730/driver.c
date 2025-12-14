#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1721165047026096986LL;
unsigned short var_10 = (unsigned short)4938;
long long int var_12 = 276162869563377670LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)33925;
int var_20 = -295178041;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
