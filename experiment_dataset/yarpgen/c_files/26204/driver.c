#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = -4507634831058862852LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-123;
int zero = 0;
int var_17 = 1442951770;
int var_18 = -1755168769;
short var_19 = (short)-29220;
signed char var_20 = (signed char)44;
long long int var_21 = -1297004525431439704LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
