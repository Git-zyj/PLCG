#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7018139123239726148LL;
unsigned int var_4 = 1966491675U;
unsigned char var_5 = (unsigned char)22;
unsigned char var_6 = (unsigned char)255;
long long int var_7 = -2698840254352208490LL;
long long int var_11 = 7448392940454460025LL;
unsigned char var_13 = (unsigned char)4;
long long int var_15 = -7244593395950969855LL;
int zero = 0;
unsigned char var_16 = (unsigned char)124;
unsigned long long int var_17 = 2622451250494935746ULL;
void init() {
}

void checksum() {
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
