#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1394530845901723838ULL;
signed char var_7 = (signed char)-92;
long long int var_9 = 5758210025106165017LL;
signed char var_11 = (signed char)9;
unsigned long long int var_15 = 315626266307839842ULL;
int zero = 0;
signed char var_18 = (signed char)-19;
int var_19 = -453684713;
long long int var_20 = 6888676269595232049LL;
unsigned long long int var_21 = 12086072801068106273ULL;
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
