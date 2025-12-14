#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6748014176355631119LL;
unsigned long long int var_10 = 5544858098869620419ULL;
int zero = 0;
long long int var_15 = -2855685275933071228LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)226;
unsigned short var_18 = (unsigned short)28239;
short var_19 = (short)24378;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
