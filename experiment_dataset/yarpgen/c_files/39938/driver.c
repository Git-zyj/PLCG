#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 705954743;
long long int var_1 = -1801587349901139737LL;
signed char var_3 = (signed char)-51;
signed char var_4 = (signed char)77;
signed char var_7 = (signed char)109;
int zero = 0;
unsigned short var_10 = (unsigned short)46697;
unsigned short var_11 = (unsigned short)53298;
unsigned int var_12 = 1937204795U;
unsigned char var_13 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
