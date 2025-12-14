#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_5 = -798315859;
short var_9 = (short)28635;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_15 = -1261698148883710108LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-60;
int var_18 = -821396397;
long long int var_19 = 368870192581306312LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
