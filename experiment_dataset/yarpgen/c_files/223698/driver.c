#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1505749533;
signed char var_3 = (signed char)-125;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)108;
unsigned char var_6 = (unsigned char)72;
int zero = 0;
int var_14 = -940496146;
unsigned short var_15 = (unsigned short)63027;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2253416955U;
void init() {
}

void checksum() {
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
