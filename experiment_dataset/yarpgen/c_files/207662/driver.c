#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12192250566300444575ULL;
unsigned char var_2 = (unsigned char)178;
unsigned int var_9 = 2074672713U;
unsigned long long int var_12 = 2969832824279613254ULL;
unsigned long long int var_14 = 8880005526755711761ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-30;
int var_18 = -528315958;
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
