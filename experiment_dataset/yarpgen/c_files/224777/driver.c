#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)239;
long long int var_2 = 4632841204352742918LL;
unsigned int var_5 = 3362314201U;
unsigned int var_6 = 4220237763U;
int var_7 = -1313953104;
unsigned char var_9 = (unsigned char)10;
unsigned char var_13 = (unsigned char)59;
short var_14 = (short)-6338;
unsigned char var_15 = (unsigned char)112;
signed char var_16 = (signed char)-39;
unsigned short var_17 = (unsigned short)2208;
int zero = 0;
unsigned int var_20 = 1998377166U;
short var_21 = (short)-31301;
int var_22 = -1171288602;
signed char var_23 = (signed char)-54;
unsigned int var_24 = 3339540074U;
short var_25 = (short)24708;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
