#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-24367;
short var_5 = (short)3604;
unsigned char var_7 = (unsigned char)181;
long long int var_8 = 3348030195713320951LL;
unsigned char var_13 = (unsigned char)205;
int zero = 0;
long long int var_16 = 4987756871568560018LL;
int var_17 = 1598261422;
short var_18 = (short)-16945;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
