#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 824752034;
unsigned int var_5 = 1207395478U;
short var_6 = (short)-3140;
int var_8 = -357984983;
unsigned char var_9 = (unsigned char)26;
short var_10 = (short)-2773;
int var_13 = 743592053;
unsigned short var_15 = (unsigned short)44655;
signed char var_16 = (signed char)27;
int zero = 0;
long long int var_17 = 8190929578324315599LL;
int var_18 = -1395586083;
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
