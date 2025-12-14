#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
unsigned long long int var_1 = 732485689472910798ULL;
unsigned int var_3 = 243838476U;
unsigned long long int var_6 = 11794819594183810847ULL;
signed char var_7 = (signed char)-19;
unsigned short var_8 = (unsigned short)13367;
short var_9 = (short)26237;
unsigned char var_10 = (unsigned char)142;
int zero = 0;
unsigned short var_11 = (unsigned short)32615;
unsigned long long int var_12 = 9209953386530276532ULL;
unsigned long long int var_13 = 165096148906077317ULL;
short var_14 = (short)7575;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
