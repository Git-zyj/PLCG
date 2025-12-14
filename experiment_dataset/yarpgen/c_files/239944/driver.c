#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
unsigned short var_8 = (unsigned short)16349;
unsigned int var_9 = 1291168080U;
unsigned short var_14 = (unsigned short)23553;
int zero = 0;
long long int var_15 = -4025565000129814643LL;
signed char var_16 = (signed char)58;
unsigned long long int var_17 = 13669938831084058501ULL;
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
