#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4321443666937242260ULL;
long long int var_11 = 6752319384092999801LL;
unsigned short var_14 = (unsigned short)65463;
unsigned int var_15 = 2621410063U;
unsigned char var_19 = (unsigned char)159;
int zero = 0;
unsigned int var_20 = 1565867091U;
unsigned long long int var_21 = 2957161751012092935ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
