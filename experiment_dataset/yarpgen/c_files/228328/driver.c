#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17493285373003477926ULL;
unsigned int var_1 = 939835620U;
unsigned long long int var_5 = 2772020085666806504ULL;
short var_6 = (short)-22740;
unsigned char var_7 = (unsigned char)121;
signed char var_12 = (signed char)62;
unsigned char var_14 = (unsigned char)253;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)108;
long long int var_17 = 8456956889410449494LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
