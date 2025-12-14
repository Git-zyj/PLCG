#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23476;
unsigned long long int var_1 = 5281647009728287428ULL;
unsigned short var_2 = (unsigned short)40629;
short var_8 = (short)11225;
long long int var_11 = 2643347373136232176LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)36;
unsigned short var_16 = (unsigned short)18016;
long long int var_17 = 6229959075281494034LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
