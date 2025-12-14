#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-10718;
unsigned short var_4 = (unsigned short)37644;
short var_7 = (short)7037;
unsigned char var_14 = (unsigned char)190;
int zero = 0;
unsigned char var_17 = (unsigned char)194;
long long int var_18 = 7856826122198848090LL;
unsigned char var_19 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
