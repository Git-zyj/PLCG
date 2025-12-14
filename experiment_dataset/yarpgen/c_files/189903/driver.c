#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
long long int var_1 = 1917263657663125821LL;
int var_3 = -750755993;
unsigned long long int var_6 = 3883848187289995548ULL;
unsigned long long int var_7 = 3850102452697868317ULL;
int var_8 = 1873920830;
unsigned long long int var_9 = 1382171676383862760ULL;
short var_11 = (short)-6500;
long long int var_12 = -7086087660704512131LL;
long long int var_14 = -345632702628213981LL;
unsigned long long int var_15 = 15972751151518615852ULL;
unsigned char var_16 = (unsigned char)188;
int zero = 0;
unsigned long long int var_18 = 14627247973716758582ULL;
unsigned long long int var_19 = 7986593724362282288ULL;
int var_20 = -1525105994;
unsigned long long int var_21 = 14846060382196813362ULL;
long long int var_22 = 2369573577277777265LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
