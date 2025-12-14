#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1150554329U;
long long int var_6 = -7746044707376933329LL;
unsigned short var_8 = (unsigned short)50885;
int zero = 0;
unsigned short var_20 = (unsigned short)63439;
unsigned short var_21 = (unsigned short)55896;
long long int var_22 = -1148757613998081202LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
