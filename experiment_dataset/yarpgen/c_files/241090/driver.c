#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
long long int var_1 = -1239835869069253837LL;
signed char var_2 = (signed char)39;
long long int var_3 = -7408818704823524374LL;
long long int var_5 = 2537794099954611781LL;
signed char var_6 = (signed char)-42;
signed char var_8 = (signed char)126;
unsigned long long int var_9 = 9697817821509607420ULL;
unsigned long long int var_13 = 2351488246613995891ULL;
long long int var_14 = 2559820451699046318LL;
long long int var_15 = 1815259639523407695LL;
long long int var_16 = -6758859000993402282LL;
int zero = 0;
long long int var_17 = 6171385754893211401LL;
unsigned long long int var_18 = 6415280030796889739ULL;
long long int var_19 = -2524527023017261098LL;
signed char var_20 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
