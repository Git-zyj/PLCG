#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1973818157U;
long long int var_1 = 1140530956160902607LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 1806615050522172457ULL;
unsigned int var_9 = 2085680187U;
int var_10 = 320097264;
signed char var_14 = (signed char)-55;
int zero = 0;
unsigned char var_17 = (unsigned char)22;
unsigned long long int var_18 = 17216097821225507773ULL;
unsigned short var_19 = (unsigned short)22990;
unsigned int var_20 = 2740018782U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
