#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4092238571275971218LL;
int var_3 = -2034532683;
_Bool var_4 = (_Bool)1;
int var_8 = -1282193760;
int zero = 0;
short var_10 = (short)-29048;
unsigned short var_11 = (unsigned short)2410;
long long int var_12 = -6442136507275300234LL;
unsigned short var_13 = (unsigned short)2514;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
