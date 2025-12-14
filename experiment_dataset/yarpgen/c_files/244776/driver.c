#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 957488708;
short var_4 = (short)20403;
unsigned int var_5 = 2399411879U;
_Bool var_6 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-68;
unsigned long long int var_21 = 17674061273676201199ULL;
void init() {
}

void checksum() {
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
