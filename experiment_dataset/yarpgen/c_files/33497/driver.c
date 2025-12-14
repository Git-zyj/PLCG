#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)4;
unsigned short var_9 = (unsigned short)22187;
unsigned long long int var_10 = 17713669433981184728ULL;
unsigned long long int var_15 = 14817822216992186740ULL;
unsigned char var_16 = (unsigned char)63;
int var_18 = 610451166;
int zero = 0;
unsigned int var_20 = 273051606U;
int var_21 = -1147227224;
unsigned char var_22 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
