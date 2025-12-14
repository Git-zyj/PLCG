#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 348704589393078594LL;
unsigned short var_7 = (unsigned short)26127;
int zero = 0;
int var_16 = -752821309;
unsigned char var_17 = (unsigned char)12;
short var_18 = (short)-25340;
unsigned short var_19 = (unsigned short)40730;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
