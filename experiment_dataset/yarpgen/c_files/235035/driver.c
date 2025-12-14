#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1688299512;
short var_7 = (short)-24454;
unsigned char var_8 = (unsigned char)108;
short var_10 = (short)-7285;
unsigned short var_12 = (unsigned short)8957;
int zero = 0;
short var_17 = (short)-16116;
long long int var_18 = -1397203544226590073LL;
signed char var_19 = (signed char)-125;
signed char var_20 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
