#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)104;
long long int var_7 = 289653475743378380LL;
unsigned int var_8 = 366522323U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1552567407U;
short var_13 = (short)17643;
unsigned int var_14 = 3523025821U;
int zero = 0;
unsigned short var_18 = (unsigned short)22219;
signed char var_19 = (signed char)115;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)75;
int var_22 = 553438789;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
