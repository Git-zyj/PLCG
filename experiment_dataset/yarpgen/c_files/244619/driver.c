#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 7677200891841257802ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -1892085920431708793LL;
long long int var_13 = 8479180238884655960LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-21227;
int zero = 0;
unsigned char var_16 = (unsigned char)217;
short var_17 = (short)14975;
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
