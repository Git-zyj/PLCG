#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4314286664942513161ULL;
long long int var_1 = 2462276974548468357LL;
_Bool var_3 = (_Bool)0;
int var_7 = -736830093;
unsigned short var_10 = (unsigned short)56113;
unsigned char var_12 = (unsigned char)34;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-6779;
unsigned long long int var_17 = 13398657651598320072ULL;
short var_18 = (short)24215;
short var_19 = (short)-14659;
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
