#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3409984925055188886LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)16450;
unsigned short var_5 = (unsigned short)18478;
unsigned int var_7 = 2427107147U;
int var_9 = 286635250;
int var_10 = -2079423913;
int var_11 = -2110867232;
int zero = 0;
unsigned char var_12 = (unsigned char)86;
int var_13 = -700182632;
unsigned short var_14 = (unsigned short)288;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
