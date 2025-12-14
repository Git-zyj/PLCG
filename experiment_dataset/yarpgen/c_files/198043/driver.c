#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47312;
short var_5 = (short)-28350;
unsigned long long int var_6 = 9471168541181321924ULL;
_Bool var_7 = (_Bool)0;
int var_8 = 2038197336;
unsigned char var_9 = (unsigned char)121;
short var_10 = (short)20931;
long long int var_11 = 6409448070303437898LL;
short var_12 = (short)23329;
unsigned long long int var_13 = 4767103568413626127ULL;
unsigned short var_15 = (unsigned short)43558;
int zero = 0;
unsigned int var_18 = 2192375788U;
signed char var_19 = (signed char)96;
unsigned char var_20 = (unsigned char)96;
short var_21 = (short)18737;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
