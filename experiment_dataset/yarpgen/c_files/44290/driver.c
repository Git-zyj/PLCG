#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5151864542360191882ULL;
unsigned short var_1 = (unsigned short)12577;
unsigned short var_3 = (unsigned short)11652;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)57685;
unsigned short var_8 = (unsigned short)55364;
unsigned short var_9 = (unsigned short)35864;
unsigned long long int var_10 = 9467135584350896439ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 12644888348047288595ULL;
unsigned short var_14 = (unsigned short)15671;
unsigned short var_15 = (unsigned short)12469;
unsigned short var_16 = (unsigned short)3982;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
