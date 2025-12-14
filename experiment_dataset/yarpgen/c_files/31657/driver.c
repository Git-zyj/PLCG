#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18130677888096878461ULL;
int var_5 = -1469335296;
short var_6 = (short)24265;
unsigned long long int var_8 = 7259709927672250249ULL;
long long int var_9 = -4593980842745097263LL;
unsigned long long int var_10 = 17925417572057875020ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)191;
unsigned long long int var_14 = 12011072557177901763ULL;
unsigned long long int var_15 = 18083439885112685289ULL;
signed char var_16 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
