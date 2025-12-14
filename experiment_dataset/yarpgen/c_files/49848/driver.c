#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned int var_3 = 2437708770U;
unsigned short var_5 = (unsigned short)54409;
int var_7 = 1611356281;
unsigned long long int var_8 = 5637982597921781190ULL;
short var_9 = (short)-6587;
short var_15 = (short)7570;
int zero = 0;
unsigned long long int var_17 = 7232465306732386521ULL;
unsigned short var_18 = (unsigned short)43317;
unsigned char var_19 = (unsigned char)26;
unsigned int var_20 = 2078652541U;
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
