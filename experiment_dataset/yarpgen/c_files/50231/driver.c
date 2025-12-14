#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5833626088092854645LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)3409;
unsigned short var_9 = (unsigned short)61821;
unsigned long long int var_10 = 7410950650410453450ULL;
long long int var_11 = -2945651800965399009LL;
signed char var_12 = (signed char)60;
unsigned char var_13 = (unsigned char)18;
int zero = 0;
unsigned char var_14 = (unsigned char)243;
unsigned short var_15 = (unsigned short)25580;
signed char var_16 = (signed char)-62;
short var_17 = (short)28855;
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
