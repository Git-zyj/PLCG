#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14780393948367592697ULL;
unsigned char var_3 = (unsigned char)101;
unsigned char var_6 = (unsigned char)41;
unsigned short var_9 = (unsigned short)43721;
long long int var_11 = -8406998999217387050LL;
int zero = 0;
unsigned short var_13 = (unsigned short)28444;
unsigned short var_14 = (unsigned short)34186;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
