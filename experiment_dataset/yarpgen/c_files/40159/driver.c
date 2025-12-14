#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1867956442;
unsigned int var_10 = 2122260510U;
unsigned int var_11 = 3423725840U;
unsigned long long int var_13 = 837007770845311305ULL;
long long int var_14 = -9032963845361640332LL;
int zero = 0;
unsigned short var_20 = (unsigned short)3440;
unsigned short var_21 = (unsigned short)25191;
unsigned long long int var_22 = 15739613445314096154ULL;
unsigned short var_23 = (unsigned short)40957;
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
