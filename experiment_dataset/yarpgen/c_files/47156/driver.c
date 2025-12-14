#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17542;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)16039;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_16 = (short)-31420;
unsigned char var_17 = (unsigned char)175;
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
