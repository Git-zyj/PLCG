#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11858691342140360964ULL;
unsigned short var_1 = (unsigned short)42362;
unsigned char var_4 = (unsigned char)252;
signed char var_5 = (signed char)-87;
short var_6 = (short)2806;
unsigned int var_8 = 1929042753U;
int var_9 = 864761876;
unsigned long long int var_10 = 9949686876212039478ULL;
short var_11 = (short)-9276;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)60326;
signed char var_15 = (signed char)-67;
long long int var_16 = -3514324093166910478LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
