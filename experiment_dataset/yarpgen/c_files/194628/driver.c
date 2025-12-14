#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31175;
unsigned short var_1 = (unsigned short)58395;
int var_3 = -1066981344;
unsigned long long int var_5 = 3840840695448830411ULL;
unsigned short var_6 = (unsigned short)51235;
unsigned short var_8 = (unsigned short)12596;
int var_9 = 1161536431;
unsigned long long int var_10 = 5977082524239932356ULL;
unsigned long long int var_11 = 11655305952680491853ULL;
int zero = 0;
unsigned int var_12 = 3499617702U;
int var_13 = -1968441455;
int var_14 = -540211154;
long long int var_15 = 7753234027457667840LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
