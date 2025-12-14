#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3332377839U;
int var_6 = -1264711509;
unsigned int var_9 = 3732184595U;
short var_15 = (short)5795;
unsigned int var_18 = 4142972299U;
int zero = 0;
short var_20 = (short)-13317;
unsigned int var_21 = 34448369U;
unsigned char var_22 = (unsigned char)58;
int var_23 = 994581885;
unsigned long long int var_24 = 10731019825225829446ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
