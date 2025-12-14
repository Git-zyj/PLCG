#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-2681;
unsigned long long int var_5 = 9552780991854922390ULL;
short var_9 = (short)-18142;
long long int var_10 = -8349256769562480651LL;
unsigned long long int var_11 = 4120144884177613226ULL;
unsigned char var_12 = (unsigned char)9;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)31659;
unsigned char var_17 = (unsigned char)170;
void init() {
}

void checksum() {
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
