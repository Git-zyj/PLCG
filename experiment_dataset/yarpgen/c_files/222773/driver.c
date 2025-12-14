#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48068;
int var_1 = -483516789;
long long int var_4 = -3060728179148817820LL;
unsigned short var_14 = (unsigned short)50300;
unsigned int var_19 = 844868251U;
int zero = 0;
int var_20 = 1515272849;
unsigned short var_21 = (unsigned short)64681;
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
