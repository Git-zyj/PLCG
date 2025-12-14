#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1504772883;
signed char var_1 = (signed char)-59;
int var_3 = 979611943;
unsigned char var_4 = (unsigned char)222;
short var_6 = (short)13021;
short var_7 = (short)7704;
int var_8 = -1813473879;
unsigned long long int var_10 = 10672821556476419538ULL;
long long int var_11 = 5183547853065858378LL;
unsigned char var_12 = (unsigned char)251;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)210;
int var_16 = 1098687903;
unsigned long long int var_17 = 7213292373105714467ULL;
_Bool var_18 = (_Bool)1;
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
