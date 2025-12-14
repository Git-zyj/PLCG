#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 312850137U;
unsigned short var_8 = (unsigned short)17392;
long long int var_10 = -590625464006470211LL;
int zero = 0;
unsigned long long int var_11 = 13875863413392407187ULL;
short var_12 = (short)-2095;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
