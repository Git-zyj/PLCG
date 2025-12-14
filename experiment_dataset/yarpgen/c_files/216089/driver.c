#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
long long int var_2 = -5771665623407836051LL;
signed char var_3 = (signed char)39;
short var_5 = (short)13243;
unsigned char var_6 = (unsigned char)196;
int var_7 = 1449907197;
long long int var_8 = -443332764438903923LL;
long long int var_10 = 1462113136823192194LL;
short var_12 = (short)16498;
long long int var_14 = -4830224367666144717LL;
short var_16 = (short)-25216;
signed char var_18 = (signed char)111;
int zero = 0;
unsigned short var_19 = (unsigned short)9872;
unsigned short var_20 = (unsigned short)39209;
long long int var_21 = 8408265819077525386LL;
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
