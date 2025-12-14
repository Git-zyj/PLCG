#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
signed char var_4 = (signed char)65;
unsigned int var_5 = 1310934765U;
unsigned int var_7 = 1759244698U;
short var_8 = (short)2094;
unsigned char var_9 = (unsigned char)155;
unsigned short var_10 = (unsigned short)48246;
long long int var_12 = 5059663699995582204LL;
int zero = 0;
long long int var_16 = -2562649186660315133LL;
long long int var_17 = 7635638422281673990LL;
long long int var_18 = 3095374974138447308LL;
long long int var_19 = -4240292841226437606LL;
unsigned int var_20 = 2368134292U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
