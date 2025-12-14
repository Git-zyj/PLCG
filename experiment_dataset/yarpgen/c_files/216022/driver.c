#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6554115091853907404LL;
unsigned char var_3 = (unsigned char)114;
unsigned char var_6 = (unsigned char)222;
unsigned char var_8 = (unsigned char)255;
unsigned short var_11 = (unsigned short)40290;
unsigned char var_12 = (unsigned char)17;
int var_14 = -1319332888;
unsigned short var_16 = (unsigned short)3382;
int zero = 0;
short var_17 = (short)30358;
unsigned short var_18 = (unsigned short)53739;
long long int var_19 = -3514965308167077743LL;
int var_20 = 1474250253;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
