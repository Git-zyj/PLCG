#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_11 = (_Bool)1;
long long int var_13 = -5452618088423276830LL;
int zero = 0;
int var_14 = 870277952;
unsigned short var_15 = (unsigned short)42832;
long long int var_16 = 5815568140524344606LL;
unsigned char var_17 = (unsigned char)246;
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
