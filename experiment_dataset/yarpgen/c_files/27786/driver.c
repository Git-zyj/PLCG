#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18009;
unsigned char var_1 = (unsigned char)25;
unsigned long long int var_4 = 7292045773272644598ULL;
long long int var_6 = 8643179362478384734LL;
long long int var_9 = -8088306230800786254LL;
unsigned char var_10 = (unsigned char)14;
signed char var_11 = (signed char)28;
unsigned char var_12 = (unsigned char)250;
int zero = 0;
unsigned char var_15 = (unsigned char)224;
unsigned short var_16 = (unsigned short)40279;
unsigned short var_17 = (unsigned short)55489;
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
