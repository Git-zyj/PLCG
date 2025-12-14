#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-80;
long long int var_11 = -4733112616245056633LL;
long long int var_12 = -8893603953504301315LL;
long long int var_15 = 2161677544481187122LL;
int zero = 0;
long long int var_17 = -8672776238439071381LL;
unsigned long long int var_18 = 10875985569970944373ULL;
long long int var_19 = -3517246970306752216LL;
void init() {
}

void checksum() {
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
