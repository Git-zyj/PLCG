#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
long long int var_6 = 1700876162483132868LL;
unsigned char var_7 = (unsigned char)106;
short var_8 = (short)9355;
unsigned short var_9 = (unsigned short)3835;
int zero = 0;
unsigned char var_10 = (unsigned char)91;
int var_11 = -875611851;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
