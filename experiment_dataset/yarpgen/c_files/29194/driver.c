#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)237;
unsigned short var_6 = (unsigned short)46609;
unsigned char var_9 = (unsigned char)248;
unsigned int var_12 = 2858738312U;
unsigned int var_14 = 2494673348U;
unsigned char var_17 = (unsigned char)159;
int zero = 0;
unsigned char var_20 = (unsigned char)64;
signed char var_21 = (signed char)-56;
unsigned char var_22 = (unsigned char)26;
unsigned long long int var_23 = 9278598303941125346ULL;
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
