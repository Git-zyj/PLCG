#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8307880394645334615LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)7481;
unsigned short var_10 = (unsigned short)5312;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)91;
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
