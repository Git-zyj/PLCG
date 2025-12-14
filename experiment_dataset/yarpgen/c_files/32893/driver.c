#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13062778934621649680ULL;
unsigned long long int var_3 = 10301699253191817404ULL;
signed char var_4 = (signed char)117;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-36;
long long int var_9 = 3557076323375066150LL;
unsigned long long int var_10 = 1451559952626187371ULL;
signed char var_11 = (signed char)75;
short var_12 = (short)23038;
int zero = 0;
long long int var_14 = 71097771709336664LL;
int var_15 = -15375152;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9629180070558424315ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
