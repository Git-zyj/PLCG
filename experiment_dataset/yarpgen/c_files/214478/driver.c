#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -362137506784734894LL;
unsigned char var_3 = (unsigned char)94;
long long int var_6 = -1621377259249883461LL;
unsigned int var_7 = 2468721870U;
unsigned short var_8 = (unsigned short)26329;
long long int var_9 = -3906235644433986087LL;
int zero = 0;
unsigned short var_12 = (unsigned short)49599;
unsigned int var_13 = 3384071732U;
long long int var_14 = 4394785110112872217LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
