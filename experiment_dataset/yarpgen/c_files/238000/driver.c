#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 839482197U;
long long int var_3 = 6997590273365270255LL;
long long int var_4 = -1456076904184017923LL;
unsigned char var_6 = (unsigned char)83;
unsigned long long int var_7 = 18131813428715599107ULL;
signed char var_9 = (signed char)10;
unsigned char var_10 = (unsigned char)128;
int zero = 0;
long long int var_13 = 1997338592038392079LL;
unsigned int var_14 = 499622871U;
short var_15 = (short)-10508;
unsigned long long int var_16 = 18230590434241610056ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
