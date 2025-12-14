#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14152532922464145096ULL;
unsigned long long int var_1 = 18245367811845123260ULL;
short var_3 = (short)-2915;
unsigned long long int var_5 = 11640037671658459755ULL;
unsigned int var_6 = 3909171839U;
signed char var_7 = (signed char)78;
unsigned long long int var_8 = 3906231184373581559ULL;
signed char var_10 = (signed char)-21;
unsigned char var_15 = (unsigned char)232;
int var_17 = 616732468;
int zero = 0;
unsigned long long int var_18 = 9958212641531415771ULL;
long long int var_19 = -4828736540539843808LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
