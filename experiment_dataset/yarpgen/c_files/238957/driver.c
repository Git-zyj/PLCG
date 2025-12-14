#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)9;
unsigned short var_2 = (unsigned short)29960;
_Bool var_3 = (_Bool)1;
long long int var_7 = 992116048565525717LL;
long long int var_9 = 7489231910514096789LL;
_Bool var_11 = (_Bool)0;
long long int var_13 = -4008161701116554402LL;
int zero = 0;
int var_14 = -367369183;
long long int var_15 = -1659069237039046087LL;
long long int var_16 = -9185513214897687169LL;
short var_17 = (short)1535;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
