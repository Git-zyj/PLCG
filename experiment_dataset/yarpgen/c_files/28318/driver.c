#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 171570705U;
unsigned int var_1 = 2314573596U;
_Bool var_3 = (_Bool)1;
int var_4 = 1386850859;
long long int var_7 = -3324773580888953422LL;
_Bool var_9 = (_Bool)1;
long long int var_13 = 2531079501441621179LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 636360108;
void init() {
}

void checksum() {
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
