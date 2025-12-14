#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15960;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-19176;
short var_10 = (short)25631;
unsigned int var_12 = 3049663368U;
unsigned char var_16 = (unsigned char)223;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -6347509556222147930LL;
short var_21 = (short)17432;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
