#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)31277;
long long int var_11 = 3320842885469536436LL;
unsigned long long int var_12 = 1804429236794063382ULL;
int zero = 0;
long long int var_14 = -6614150723820792629LL;
long long int var_15 = 4778923026100980464LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)29874;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
