#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1515051251;
short var_2 = (short)25496;
_Bool var_3 = (_Bool)0;
short var_6 = (short)17965;
short var_7 = (short)-17643;
int var_10 = 99813055;
short var_11 = (short)22408;
int zero = 0;
long long int var_12 = 3624112588301813518LL;
long long int var_13 = -7613989263560658276LL;
unsigned char var_14 = (unsigned char)3;
signed char var_15 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
