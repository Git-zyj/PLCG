#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3712879317U;
long long int var_1 = -3465516643976658466LL;
int var_14 = 65257885;
short var_17 = (short)11919;
unsigned short var_18 = (unsigned short)31122;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)10440;
int var_21 = -922727657;
unsigned char var_22 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
