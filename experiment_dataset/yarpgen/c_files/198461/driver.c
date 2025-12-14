#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5250425450662157118LL;
int var_5 = 1403545300;
short var_6 = (short)7453;
signed char var_9 = (signed char)-54;
long long int var_12 = 4619716730625138543LL;
int var_13 = -1712532666;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = -3750604418252447958LL;
signed char var_20 = (signed char)109;
short var_21 = (short)-7079;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
