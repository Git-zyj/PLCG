#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
short var_1 = (short)-26270;
unsigned short var_2 = (unsigned short)57853;
unsigned int var_4 = 3410867794U;
unsigned long long int var_5 = 5043635481364976803ULL;
long long int var_6 = -595743469072193301LL;
unsigned long long int var_8 = 712393356631366396ULL;
long long int var_16 = 519123559192483493LL;
unsigned long long int var_17 = 9813009453674255182ULL;
int zero = 0;
short var_19 = (short)24495;
int var_20 = 840109053;
unsigned long long int var_21 = 10403087705237426737ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
