#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3235827580221834687ULL;
long long int var_6 = -4031384242853715852LL;
signed char var_7 = (signed char)10;
signed char var_14 = (signed char)91;
int zero = 0;
signed char var_19 = (signed char)84;
_Bool var_20 = (_Bool)0;
long long int var_21 = 7433194135823617493LL;
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
