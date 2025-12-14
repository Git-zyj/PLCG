#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_5 = 4282926774U;
unsigned long long int var_7 = 6559069350146944588ULL;
unsigned int var_9 = 1514037586U;
long long int var_15 = -1416390755764002258LL;
int zero = 0;
long long int var_16 = 583645748693531653LL;
short var_17 = (short)22184;
int var_18 = -1166012393;
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
