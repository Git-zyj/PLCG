#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6847362155200067639LL;
unsigned long long int var_4 = 11135281682434102862ULL;
unsigned char var_7 = (unsigned char)218;
unsigned short var_9 = (unsigned short)32789;
unsigned short var_10 = (unsigned short)11888;
long long int var_13 = 1961018647434778082LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)130;
unsigned char var_17 = (unsigned char)93;
unsigned int var_18 = 2575548244U;
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
