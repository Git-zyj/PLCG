#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2640578866238344465ULL;
long long int var_6 = -1888226823458845811LL;
int var_11 = 1092474128;
int var_17 = -692019386;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-32;
_Bool var_22 = (_Bool)1;
short var_23 = (short)5878;
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
