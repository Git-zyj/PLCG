#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5226025057606730988ULL;
unsigned char var_4 = (unsigned char)150;
unsigned char var_16 = (unsigned char)213;
int zero = 0;
unsigned int var_19 = 1891195569U;
unsigned int var_20 = 2809968045U;
unsigned short var_21 = (unsigned short)26950;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
