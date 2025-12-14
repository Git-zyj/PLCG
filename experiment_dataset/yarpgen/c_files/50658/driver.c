#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 237777679;
long long int var_3 = -4371236983163530789LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)219;
long long int var_8 = 7603762525277502455LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 13336652482557934415ULL;
unsigned char var_12 = (unsigned char)215;
long long int var_13 = -7148387721586747416LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
