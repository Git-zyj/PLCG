#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57573;
unsigned char var_4 = (unsigned char)126;
unsigned int var_5 = 3093729751U;
unsigned long long int var_6 = 15304679666562717756ULL;
unsigned char var_8 = (unsigned char)165;
unsigned int var_9 = 3834403853U;
short var_10 = (short)17907;
_Bool var_12 = (_Bool)0;
long long int var_14 = 4225429152306029904LL;
int zero = 0;
unsigned long long int var_15 = 6068585077066579646ULL;
short var_16 = (short)6364;
void init() {
}

void checksum() {
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
