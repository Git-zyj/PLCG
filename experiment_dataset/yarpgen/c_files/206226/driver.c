#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 846911204;
unsigned short var_3 = (unsigned short)51951;
int zero = 0;
long long int var_16 = -4140419954467121234LL;
long long int var_17 = 5366869348010213791LL;
unsigned short var_18 = (unsigned short)536;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
