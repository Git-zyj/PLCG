#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-39;
int var_8 = -1171070909;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)80;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
long long int var_21 = -4118803981163174529LL;
void init() {
}

void checksum() {
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
