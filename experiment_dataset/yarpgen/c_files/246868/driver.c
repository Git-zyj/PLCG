#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
unsigned long long int var_3 = 14737775518467364253ULL;
unsigned char var_4 = (unsigned char)229;
long long int var_5 = 728889867449133376LL;
long long int var_9 = 7981636901548202033LL;
unsigned long long int var_10 = 18045228892547237646ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)221;
unsigned short var_14 = (unsigned short)48425;
signed char var_15 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
