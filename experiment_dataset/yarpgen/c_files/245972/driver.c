#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)229;
int var_4 = 1872652102;
short var_6 = (short)9958;
_Bool var_7 = (_Bool)0;
int var_9 = -297505006;
unsigned long long int var_11 = 13081291715200936933ULL;
unsigned char var_13 = (unsigned char)74;
unsigned char var_15 = (unsigned char)13;
unsigned char var_16 = (unsigned char)129;
int zero = 0;
unsigned char var_17 = (unsigned char)72;
short var_18 = (short)-19632;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
