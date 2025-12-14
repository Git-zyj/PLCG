#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1265181592889367004LL;
unsigned long long int var_2 = 4386618965348423257ULL;
unsigned short var_3 = (unsigned short)17647;
unsigned short var_6 = (unsigned short)25376;
signed char var_8 = (signed char)103;
unsigned char var_10 = (unsigned char)158;
int var_11 = -975449343;
short var_12 = (short)-21464;
unsigned char var_13 = (unsigned char)2;
int zero = 0;
short var_15 = (short)-2339;
unsigned short var_16 = (unsigned short)9463;
long long int var_17 = 4425219725101460164LL;
short var_18 = (short)9372;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
