#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9059;
short var_4 = (short)-22876;
unsigned long long int var_5 = 8836517994798615799ULL;
unsigned long long int var_8 = 18129401047870115909ULL;
unsigned short var_9 = (unsigned short)47743;
unsigned char var_11 = (unsigned char)149;
int zero = 0;
long long int var_13 = -3351265002693985162LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
