#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50739;
long long int var_5 = -925978668272738688LL;
unsigned char var_9 = (unsigned char)212;
unsigned int var_10 = 1951641832U;
unsigned long long int var_14 = 9878646528186909327ULL;
short var_16 = (short)3132;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8119282649625494485LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
