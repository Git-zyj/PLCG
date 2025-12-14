#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29384;
signed char var_4 = (signed char)60;
long long int var_6 = -8832212564658644770LL;
unsigned short var_7 = (unsigned short)1313;
unsigned long long int var_16 = 5287067215952297509ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)79;
unsigned long long int var_18 = 17228504770988702095ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
