#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3152518092933651585LL;
unsigned short var_2 = (unsigned short)10297;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)63989;
long long int var_9 = -1663705749627282010LL;
int zero = 0;
int var_10 = -753934288;
signed char var_11 = (signed char)126;
unsigned short var_12 = (unsigned short)63605;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
