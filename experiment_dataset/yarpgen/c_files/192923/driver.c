#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37096;
unsigned short var_3 = (unsigned short)2737;
unsigned short var_7 = (unsigned short)7293;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)114;
int zero = 0;
short var_15 = (short)-16091;
int var_16 = 837969733;
long long int var_17 = -2623972753892128187LL;
long long int var_18 = -5233115477147560186LL;
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
