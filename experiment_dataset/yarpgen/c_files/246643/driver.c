#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6263699215226003670LL;
unsigned long long int var_1 = 8204274825759874956ULL;
unsigned long long int var_7 = 9901114225222204174ULL;
signed char var_10 = (signed char)-66;
signed char var_13 = (signed char)-120;
int zero = 0;
unsigned long long int var_15 = 7228150558723178435ULL;
signed char var_16 = (signed char)33;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)90;
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
