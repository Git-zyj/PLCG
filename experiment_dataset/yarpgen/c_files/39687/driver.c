#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
short var_4 = (short)10984;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)202;
unsigned int var_9 = 304735792U;
long long int var_10 = -5430475538079773134LL;
int zero = 0;
unsigned long long int var_12 = 16758418957449305670ULL;
short var_13 = (short)-6623;
unsigned short var_14 = (unsigned short)50571;
int var_15 = 619019897;
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
