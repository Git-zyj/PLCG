#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
unsigned int var_4 = 1081449772U;
unsigned short var_5 = (unsigned short)52791;
signed char var_7 = (signed char)-35;
unsigned char var_8 = (unsigned char)139;
unsigned short var_9 = (unsigned short)40252;
int zero = 0;
long long int var_10 = 3149173072471166553LL;
unsigned char var_11 = (unsigned char)132;
unsigned char var_12 = (unsigned char)96;
int var_13 = -825349375;
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
