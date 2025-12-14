#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15696180568892377608ULL;
unsigned long long int var_7 = 12461406396646038944ULL;
int var_12 = -1533876015;
short var_16 = (short)25133;
int zero = 0;
long long int var_17 = 715028679463133918LL;
short var_18 = (short)8486;
int var_19 = -312519752;
_Bool var_20 = (_Bool)0;
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
