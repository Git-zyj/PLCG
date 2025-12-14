#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)19;
unsigned char var_4 = (unsigned char)190;
short var_5 = (short)16690;
unsigned char var_6 = (unsigned char)85;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_14 = -2062478934552252349LL;
unsigned short var_15 = (unsigned short)22311;
unsigned short var_16 = (unsigned short)23707;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8542473616977681323LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
