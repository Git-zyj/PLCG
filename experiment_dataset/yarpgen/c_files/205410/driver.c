#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
unsigned int var_3 = 3541468632U;
signed char var_4 = (signed char)103;
signed char var_5 = (signed char)40;
_Bool var_14 = (_Bool)1;
long long int var_18 = -8032124047998698284LL;
int zero = 0;
unsigned long long int var_19 = 15587094428291963151ULL;
long long int var_20 = -881295704869121960LL;
void init() {
}

void checksum() {
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
