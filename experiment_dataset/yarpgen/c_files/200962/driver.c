#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26923;
unsigned char var_2 = (unsigned char)15;
unsigned short var_3 = (unsigned short)23836;
short var_5 = (short)10325;
long long int var_8 = -6343666054240761658LL;
int zero = 0;
unsigned long long int var_12 = 1279389189773917662ULL;
short var_13 = (short)-4324;
long long int var_14 = -4177187523040548113LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
