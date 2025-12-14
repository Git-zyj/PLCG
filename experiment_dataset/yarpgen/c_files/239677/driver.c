#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -152736045;
unsigned int var_5 = 1631701266U;
unsigned short var_8 = (unsigned short)20772;
long long int var_9 = 5123099861132158069LL;
int zero = 0;
signed char var_13 = (signed char)-125;
unsigned char var_14 = (unsigned char)5;
unsigned int var_15 = 1399475642U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
