#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7538;
short var_3 = (short)-30922;
short var_4 = (short)14523;
unsigned char var_5 = (unsigned char)164;
signed char var_9 = (signed char)125;
int zero = 0;
signed char var_10 = (signed char)-106;
unsigned char var_11 = (unsigned char)113;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
