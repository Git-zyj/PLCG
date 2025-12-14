#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned long long int var_5 = 15734393641905427634ULL;
unsigned int var_8 = 2963146484U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-9;
unsigned short var_13 = (unsigned short)41228;
_Bool var_15 = (_Bool)0;
long long int var_17 = -140468249811437399LL;
short var_18 = (short)-30951;
unsigned char var_19 = (unsigned char)172;
int zero = 0;
long long int var_20 = -873199410633248395LL;
int var_21 = -826076094;
unsigned int var_22 = 1018064780U;
_Bool var_23 = (_Bool)0;
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
