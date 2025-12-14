#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3834352620427365931ULL;
unsigned char var_4 = (unsigned char)59;
unsigned int var_5 = 1101341197U;
unsigned long long int var_7 = 2005943613592511020ULL;
int var_9 = -2131932222;
int var_13 = 592699311;
signed char var_14 = (signed char)62;
unsigned short var_16 = (unsigned short)45479;
int zero = 0;
unsigned long long int var_17 = 12925608588743895247ULL;
unsigned long long int var_18 = 16114397343718779558ULL;
unsigned char var_19 = (unsigned char)119;
unsigned long long int var_20 = 13239761566126547044ULL;
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
