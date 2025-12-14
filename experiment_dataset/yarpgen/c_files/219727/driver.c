#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = -2527843190866124118LL;
signed char var_6 = (signed char)17;
signed char var_9 = (signed char)-25;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 7745920738126187627ULL;
signed char var_21 = (signed char)-73;
signed char var_22 = (signed char)-8;
long long int var_23 = 6162130657604712020LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
