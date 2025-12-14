#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7572;
long long int var_1 = 4242986017681599471LL;
unsigned char var_4 = (unsigned char)167;
unsigned int var_5 = 651461098U;
long long int var_7 = 5657975695085132841LL;
unsigned int var_8 = 3796904446U;
short var_9 = (short)-10826;
unsigned short var_10 = (unsigned short)46740;
int zero = 0;
short var_11 = (short)-13714;
long long int var_12 = 2557519603079455552LL;
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
