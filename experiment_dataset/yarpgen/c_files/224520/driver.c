#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7162771122923088334LL;
unsigned short var_1 = (unsigned short)24259;
short var_3 = (short)-29125;
short var_4 = (short)23060;
unsigned char var_5 = (unsigned char)167;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)29882;
int var_13 = 405258015;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
