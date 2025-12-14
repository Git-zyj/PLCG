#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1198023360903733062LL;
unsigned short var_1 = (unsigned short)33450;
short var_7 = (short)-28368;
long long int var_8 = -4596637507673242531LL;
short var_11 = (short)9153;
int var_12 = 938525499;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 6972575945840849563LL;
void init() {
}

void checksum() {
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
