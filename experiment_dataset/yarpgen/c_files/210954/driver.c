#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3669;
unsigned long long int var_1 = 6855551201040269248ULL;
unsigned short var_6 = (unsigned short)7679;
unsigned char var_8 = (unsigned char)192;
unsigned char var_9 = (unsigned char)152;
int zero = 0;
unsigned long long int var_10 = 12232187862346752249ULL;
unsigned char var_11 = (unsigned char)243;
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
