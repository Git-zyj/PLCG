#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2674329799531152691LL;
unsigned char var_8 = (unsigned char)182;
int var_9 = 1355477080;
unsigned short var_15 = (unsigned short)11987;
int zero = 0;
unsigned long long int var_18 = 13221999711386712762ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)24477;
unsigned short var_21 = (unsigned short)5630;
unsigned short var_22 = (unsigned short)24957;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
