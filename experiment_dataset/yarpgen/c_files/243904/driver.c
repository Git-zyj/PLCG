#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 342935712768188851ULL;
unsigned char var_12 = (unsigned char)194;
unsigned short var_15 = (unsigned short)8792;
int zero = 0;
long long int var_16 = 2368734851368576462LL;
unsigned short var_17 = (unsigned short)17589;
unsigned int var_18 = 2367762305U;
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
