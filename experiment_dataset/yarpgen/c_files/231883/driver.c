#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5206;
unsigned short var_4 = (unsigned short)50828;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-21410;
unsigned char var_15 = (unsigned char)167;
int zero = 0;
unsigned long long int var_19 = 17820290000611932132ULL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 2959925961253516231LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
