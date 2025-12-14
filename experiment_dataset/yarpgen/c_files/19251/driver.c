#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
unsigned short var_2 = (unsigned short)23417;
unsigned long long int var_3 = 17803542007948489926ULL;
unsigned char var_4 = (unsigned char)170;
unsigned char var_5 = (unsigned char)35;
long long int var_6 = -8439359120686392541LL;
short var_7 = (short)28268;
short var_9 = (short)1824;
long long int var_10 = 3637354227680204583LL;
unsigned long long int var_11 = 12430918575619324622ULL;
int zero = 0;
unsigned int var_12 = 4148594164U;
unsigned char var_13 = (unsigned char)87;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
