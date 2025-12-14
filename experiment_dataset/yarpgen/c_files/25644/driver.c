#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 722085606U;
unsigned short var_8 = (unsigned short)23503;
unsigned char var_9 = (unsigned char)140;
long long int var_12 = 2053530951292474719LL;
unsigned int var_13 = 4031357762U;
long long int var_14 = 5548855183764667159LL;
int zero = 0;
unsigned char var_15 = (unsigned char)118;
short var_16 = (short)26222;
short var_17 = (short)-30295;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
