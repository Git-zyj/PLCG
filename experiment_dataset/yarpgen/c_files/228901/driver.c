#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9673;
int var_4 = -1207519081;
long long int var_8 = 2424577743818531862LL;
unsigned char var_16 = (unsigned char)33;
int zero = 0;
long long int var_18 = 7223625832703856922LL;
int var_19 = -74952952;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
