#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)96;
unsigned char var_2 = (unsigned char)17;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)1790;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
long long int var_13 = -1592470836372770569LL;
int zero = 0;
int var_14 = -468168102;
unsigned long long int var_15 = 14371751368362949654ULL;
long long int var_16 = -8496466564453962791LL;
void init() {
}

void checksum() {
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
