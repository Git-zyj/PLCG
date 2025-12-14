#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28879;
long long int var_4 = -6702664167390602450LL;
unsigned int var_6 = 1124913027U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)172;
unsigned char var_10 = (unsigned char)142;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)57;
int zero = 0;
signed char var_15 = (signed char)-90;
short var_16 = (short)-5861;
int var_17 = 1844624903;
void init() {
}

void checksum() {
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
