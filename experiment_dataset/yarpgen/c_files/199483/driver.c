#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4845879850765686449LL;
unsigned char var_6 = (unsigned char)7;
signed char var_11 = (signed char)-38;
unsigned long long int var_13 = 16575408162853322201ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_19 = (unsigned short)19185;
int zero = 0;
signed char var_20 = (signed char)-67;
long long int var_21 = 6502577029855868196LL;
unsigned long long int var_22 = 14982869495770750707ULL;
unsigned long long int var_23 = 2970120004656672154ULL;
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
