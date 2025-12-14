#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)12072;
signed char var_5 = (signed char)23;
short var_6 = (short)-28523;
short var_10 = (short)8892;
unsigned short var_15 = (unsigned short)43187;
unsigned short var_16 = (unsigned short)33867;
long long int var_17 = -5154132162753995355LL;
int zero = 0;
unsigned long long int var_20 = 8143766778237415513ULL;
short var_21 = (short)-3;
short var_22 = (short)7344;
void init() {
}

void checksum() {
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
