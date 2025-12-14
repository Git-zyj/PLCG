#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)32081;
int var_11 = -227128108;
unsigned short var_12 = (unsigned short)15810;
unsigned char var_13 = (unsigned char)230;
int zero = 0;
long long int var_19 = -6031929971232062076LL;
unsigned long long int var_20 = 1634366526667435304ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
