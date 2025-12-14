#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)36935;
unsigned short var_8 = (unsigned short)25612;
int var_9 = -2011507649;
unsigned short var_13 = (unsigned short)19312;
int var_14 = -1747617620;
int zero = 0;
long long int var_15 = 8803856722038928009LL;
short var_16 = (short)1263;
signed char var_17 = (signed char)80;
void init() {
}

void checksum() {
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
