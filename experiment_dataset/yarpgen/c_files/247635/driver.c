#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11617;
int var_5 = -1471698070;
short var_7 = (short)3639;
unsigned short var_8 = (unsigned short)25541;
long long int var_9 = 7605448153225033792LL;
short var_10 = (short)-21682;
unsigned short var_12 = (unsigned short)44975;
int zero = 0;
short var_13 = (short)30479;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)86;
short var_16 = (short)22307;
unsigned long long int var_17 = 2746651385677662262ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
