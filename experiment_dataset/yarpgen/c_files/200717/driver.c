#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 898371910327016946ULL;
short var_3 = (short)30476;
unsigned int var_5 = 3758962047U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)32;
int zero = 0;
unsigned int var_17 = 2944605431U;
unsigned char var_18 = (unsigned char)199;
void init() {
}

void checksum() {
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
