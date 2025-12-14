#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26478;
short var_4 = (short)-25809;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)84;
unsigned short var_12 = (unsigned short)49107;
unsigned char var_13 = (unsigned char)44;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 7441309365695735994ULL;
unsigned long long int var_18 = 13606035953964804175ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -6730254617083484847LL;
unsigned char var_21 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
