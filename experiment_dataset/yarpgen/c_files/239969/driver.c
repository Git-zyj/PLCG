#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4527988331659788489ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -67506414405148489LL;
int zero = 0;
int var_16 = -272139560;
long long int var_17 = -7565623052238909535LL;
int var_18 = 155175979;
signed char var_19 = (signed char)-46;
void init() {
}

void checksum() {
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
