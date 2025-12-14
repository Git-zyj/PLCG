#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)89;
unsigned long long int var_4 = 17562297358396728956ULL;
short var_5 = (short)-28029;
short var_6 = (short)24522;
unsigned char var_7 = (unsigned char)130;
signed char var_10 = (signed char)89;
short var_11 = (short)-10672;
unsigned char var_12 = (unsigned char)85;
int var_13 = 1399204831;
unsigned long long int var_17 = 17792874207646638067ULL;
int zero = 0;
long long int var_19 = 6403008542475787982LL;
short var_20 = (short)-30476;
void init() {
}

void checksum() {
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
