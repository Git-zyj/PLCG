#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1602317610914940215LL;
unsigned char var_1 = (unsigned char)48;
long long int var_2 = -2740234592000028595LL;
unsigned long long int var_3 = 13881611053992814944ULL;
long long int var_4 = -3440705174740212670LL;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-32661;
int zero = 0;
short var_15 = (short)-13174;
unsigned short var_16 = (unsigned short)63119;
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
