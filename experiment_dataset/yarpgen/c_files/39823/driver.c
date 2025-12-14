#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)26582;
unsigned char var_6 = (unsigned char)14;
long long int var_7 = 8931946680410189896LL;
int var_9 = 678869316;
unsigned long long int var_10 = 7076516127212732182ULL;
int zero = 0;
int var_15 = -107044863;
int var_16 = -952095248;
long long int var_17 = -7427231404130340333LL;
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
