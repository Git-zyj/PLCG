#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6998042876524141752LL;
long long int var_3 = 1160552385751379905LL;
signed char var_5 = (signed char)-11;
unsigned long long int var_7 = 6684744421251987862ULL;
unsigned int var_8 = 594077991U;
unsigned int var_9 = 2312498387U;
long long int var_10 = -3719149717647326549LL;
unsigned long long int var_15 = 12736192749930442271ULL;
unsigned long long int var_16 = 10606157214326736457ULL;
int zero = 0;
unsigned long long int var_19 = 1765168375085015916ULL;
short var_20 = (short)27857;
unsigned long long int var_21 = 860500082049018772ULL;
signed char var_22 = (signed char)-67;
void init() {
}

void checksum() {
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
