#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3109182822568989643LL;
unsigned long long int var_2 = 9649942370425959381ULL;
long long int var_12 = -4955203541371770339LL;
unsigned short var_14 = (unsigned short)65293;
long long int var_15 = 1831502831607220724LL;
long long int var_17 = 494594067742716331LL;
int zero = 0;
long long int var_20 = 4685013242269677863LL;
unsigned long long int var_21 = 7395405840864763194ULL;
short var_22 = (short)15363;
long long int var_23 = 3112646387930441877LL;
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
