#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11322;
unsigned char var_3 = (unsigned char)202;
short var_5 = (short)16543;
unsigned long long int var_7 = 1791138785918861612ULL;
long long int var_8 = 5538956906737099805LL;
unsigned int var_9 = 1893074370U;
signed char var_11 = (signed char)2;
int zero = 0;
long long int var_12 = 693070501780547082LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7477614304462071087ULL;
unsigned int var_15 = 2330944844U;
signed char var_16 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
