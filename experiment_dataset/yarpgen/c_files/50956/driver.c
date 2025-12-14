#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)13;
long long int var_2 = 4558589449617061718LL;
signed char var_3 = (signed char)-16;
long long int var_4 = -1242339945154369996LL;
unsigned int var_5 = 427219445U;
unsigned long long int var_7 = 17903855717860102368ULL;
unsigned int var_8 = 4171162794U;
unsigned char var_11 = (unsigned char)187;
int zero = 0;
unsigned short var_12 = (unsigned short)46598;
unsigned char var_13 = (unsigned char)119;
unsigned char var_14 = (unsigned char)49;
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
