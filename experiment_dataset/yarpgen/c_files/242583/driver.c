#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1889167499U;
unsigned int var_6 = 1564115381U;
unsigned long long int var_9 = 10567561977790209692ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)199;
int zero = 0;
unsigned char var_20 = (unsigned char)91;
unsigned short var_21 = (unsigned short)17505;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
