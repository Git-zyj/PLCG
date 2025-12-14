#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1128296075584846086ULL;
unsigned long long int var_1 = 4331335838401584016ULL;
short var_3 = (short)30190;
signed char var_4 = (signed char)32;
int var_5 = 1141506507;
unsigned char var_10 = (unsigned char)11;
long long int var_13 = -8197737991781856213LL;
unsigned int var_14 = 4070339336U;
long long int var_16 = 9166652794848718406LL;
int zero = 0;
unsigned short var_19 = (unsigned short)47408;
short var_20 = (short)-19105;
unsigned short var_21 = (unsigned short)57265;
void init() {
}

void checksum() {
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
