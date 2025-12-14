#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 265332156;
long long int var_4 = 7504541515365363924LL;
unsigned long long int var_7 = 15807927283491786040ULL;
signed char var_14 = (signed char)-2;
int zero = 0;
unsigned short var_16 = (unsigned short)64046;
unsigned short var_17 = (unsigned short)20141;
long long int var_18 = 354787438688238485LL;
unsigned long long int var_19 = 14402604280713779685ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
