#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50075;
int var_2 = 1783824578;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)41908;
long long int var_5 = -7897104280949495117LL;
unsigned char var_7 = (unsigned char)92;
short var_8 = (short)-3327;
signed char var_9 = (signed char)-86;
int zero = 0;
long long int var_10 = 5001250255014032099LL;
int var_11 = 1782983067;
unsigned long long int var_12 = 14420938191305396430ULL;
int var_13 = -1894783252;
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
