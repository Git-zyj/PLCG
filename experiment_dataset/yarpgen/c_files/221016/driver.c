#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1259779003874171129LL;
short var_7 = (short)7736;
_Bool var_8 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = 572495324554190344LL;
long long int var_17 = -3664260335293450376LL;
long long int var_18 = 6254820196705028386LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
