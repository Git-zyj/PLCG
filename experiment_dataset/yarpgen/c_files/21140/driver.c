#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)47;
unsigned long long int var_4 = 3993020294701388612ULL;
unsigned short var_7 = (unsigned short)31382;
long long int var_8 = -1221959791810319466LL;
long long int var_10 = 8120719235228359077LL;
long long int var_14 = -4884420029470556325LL;
int zero = 0;
long long int var_18 = -8800548636459733882LL;
signed char var_19 = (signed char)66;
unsigned int var_20 = 3716811848U;
unsigned short var_21 = (unsigned short)30101;
unsigned long long int var_22 = 14248365539652265747ULL;
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
