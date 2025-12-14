#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1391641604U;
short var_7 = (short)12790;
long long int var_8 = -8159694534909164697LL;
int zero = 0;
signed char var_20 = (signed char)-54;
unsigned short var_21 = (unsigned short)14957;
unsigned char var_22 = (unsigned char)224;
unsigned long long int var_23 = 9702281944130686835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
