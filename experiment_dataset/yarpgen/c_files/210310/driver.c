#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)137;
unsigned short var_3 = (unsigned short)59447;
signed char var_11 = (signed char)-111;
long long int var_12 = 6070931420309803502LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)12035;
void init() {
}

void checksum() {
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
