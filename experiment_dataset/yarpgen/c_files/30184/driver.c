#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-70;
unsigned short var_4 = (unsigned short)26723;
unsigned char var_5 = (unsigned char)122;
unsigned short var_9 = (unsigned short)8459;
int zero = 0;
unsigned long long int var_18 = 4694594121525581246ULL;
long long int var_19 = -4718839915012891629LL;
long long int var_20 = -6194656656210100552LL;
void init() {
}

void checksum() {
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
