#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8877232297670641487ULL;
unsigned short var_5 = (unsigned short)6654;
unsigned short var_6 = (unsigned short)34568;
short var_8 = (short)13610;
signed char var_9 = (signed char)-36;
long long int var_13 = 3048404830419023515LL;
signed char var_15 = (signed char)-102;
int zero = 0;
long long int var_16 = 8434637158577467080LL;
unsigned long long int var_17 = 17047543195498316120ULL;
void init() {
}

void checksum() {
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
