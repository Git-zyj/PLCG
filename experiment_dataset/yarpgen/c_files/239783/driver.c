#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22774;
long long int var_3 = 73872606758765967LL;
short var_4 = (short)7083;
unsigned char var_5 = (unsigned char)206;
long long int var_8 = 5535719695200034277LL;
int var_9 = 628896184;
int zero = 0;
int var_10 = 2088170165;
unsigned char var_11 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
