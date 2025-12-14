#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 4958184417443503149LL;
unsigned int var_3 = 290107580U;
int var_4 = -446379151;
int var_6 = 108574983;
short var_9 = (short)25173;
int zero = 0;
long long int var_15 = -2686835062174433381LL;
unsigned int var_16 = 606166307U;
unsigned int var_17 = 264131560U;
signed char var_18 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
