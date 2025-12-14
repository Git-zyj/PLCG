#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4263172720075477858ULL;
unsigned char var_1 = (unsigned char)57;
unsigned short var_5 = (unsigned short)10438;
long long int var_10 = -2874157955076634981LL;
long long int var_14 = -2202019851818940820LL;
int zero = 0;
unsigned char var_15 = (unsigned char)41;
long long int var_16 = -4433551182722551254LL;
long long int var_17 = -5943951048869433055LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
