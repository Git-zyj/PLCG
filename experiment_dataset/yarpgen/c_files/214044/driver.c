#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22416;
unsigned long long int var_3 = 17034406029989456916ULL;
unsigned short var_11 = (unsigned short)44183;
int zero = 0;
unsigned short var_17 = (unsigned short)40408;
unsigned long long int var_18 = 16307182768346787231ULL;
unsigned short var_19 = (unsigned short)65013;
void init() {
}

void checksum() {
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
