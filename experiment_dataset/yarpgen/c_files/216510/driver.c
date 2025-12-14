#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1364088070;
unsigned char var_6 = (unsigned char)209;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)192;
unsigned long long int var_9 = 16312877607842687165ULL;
unsigned int var_11 = 441765854U;
unsigned int var_12 = 3929042537U;
int zero = 0;
unsigned short var_14 = (unsigned short)57385;
_Bool var_15 = (_Bool)0;
long long int var_16 = -6534670974786378436LL;
long long int var_17 = -8553701193310320312LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
