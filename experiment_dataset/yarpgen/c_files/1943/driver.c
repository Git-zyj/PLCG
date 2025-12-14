#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
unsigned int var_3 = 2657571968U;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-15290;
signed char var_10 = (signed char)93;
unsigned char var_11 = (unsigned char)102;
int zero = 0;
long long int var_14 = -617110661272603278LL;
unsigned char var_15 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
