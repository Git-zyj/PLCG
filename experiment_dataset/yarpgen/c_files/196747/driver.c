#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 938977242;
unsigned long long int var_3 = 9024242243729271955ULL;
unsigned char var_6 = (unsigned char)0;
short var_7 = (short)-227;
int var_8 = -1756839897;
unsigned char var_9 = (unsigned char)22;
unsigned short var_10 = (unsigned short)47956;
int var_12 = 132107557;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-20734;
long long int var_16 = -8522943763898000964LL;
int var_17 = -774225854;
unsigned char var_18 = (unsigned char)63;
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
