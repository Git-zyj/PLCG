#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 214874295231470157ULL;
unsigned char var_5 = (unsigned char)58;
unsigned char var_6 = (unsigned char)160;
unsigned long long int var_7 = 9993079653839747746ULL;
unsigned short var_9 = (unsigned short)8136;
long long int var_11 = -8239999329020624483LL;
unsigned int var_14 = 1634866082U;
int zero = 0;
unsigned long long int var_15 = 14505396610988980743ULL;
long long int var_16 = -8309539208118038816LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)17116;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
