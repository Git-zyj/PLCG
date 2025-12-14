#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned long long int var_4 = 6896303178277920029ULL;
unsigned int var_8 = 3744610407U;
long long int var_13 = -6934456962831237947LL;
int zero = 0;
unsigned short var_16 = (unsigned short)13734;
unsigned char var_17 = (unsigned char)176;
void init() {
}

void checksum() {
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
