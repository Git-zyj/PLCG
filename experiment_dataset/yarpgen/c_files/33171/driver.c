#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
short var_5 = (short)14979;
long long int var_6 = 4839703988249992428LL;
unsigned char var_7 = (unsigned char)142;
long long int var_12 = -2414510848831356485LL;
short var_13 = (short)30743;
int zero = 0;
unsigned int var_15 = 2998543939U;
unsigned short var_16 = (unsigned short)25754;
unsigned long long int var_17 = 3769462485983343164ULL;
unsigned long long int var_18 = 18345475942366609270ULL;
void init() {
}

void checksum() {
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
