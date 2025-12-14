#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2083117967649028993LL;
long long int var_1 = 6317906288807504841LL;
int var_2 = -121785699;
signed char var_3 = (signed char)113;
short var_4 = (short)15807;
unsigned int var_5 = 603650659U;
signed char var_6 = (signed char)-12;
int var_9 = 60270121;
unsigned int var_13 = 1177278787U;
unsigned char var_15 = (unsigned char)98;
int zero = 0;
long long int var_16 = 8716998178649307962LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)28902;
void init() {
}

void checksum() {
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
