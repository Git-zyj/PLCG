#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1036948489299374747LL;
_Bool var_3 = (_Bool)1;
long long int var_5 = -7201113378185310985LL;
long long int var_8 = 6966890466165497025LL;
long long int var_10 = -3566954883429415724LL;
long long int var_18 = 8643731072212910430LL;
int zero = 0;
short var_20 = (short)15459;
long long int var_21 = 695308448918264857LL;
long long int var_22 = -6041088376522099103LL;
short var_23 = (short)4487;
short var_24 = (short)20004;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
